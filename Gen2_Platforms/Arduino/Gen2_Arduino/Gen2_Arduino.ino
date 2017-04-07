//ROS includes
#include <ros.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Float32.h> 
#include <ros/time.h>
#include <sensor_msgs/Range.h>
//Gen2 Includes
#include <gen2_motor.h>
#include <gen2_encoder.h>

//Define Pin Connection for Encoders.
const int encoderLeft_CH1 = 19; //<-left motor interrupt
const int encoderLeft_CH2 = 22; //<-left motor direction
const int encoderRight_CH1 = 18;//<-right motor interrupt
const int encoderRight_CH2 = 23;//<-right motor direction 

//Define Pin Connections for Motor Controller
const int motorLeft_Enable = 2;
const int motorLeft_I1 = 25;
const int motorLeft_I2 = 24;
const int motorRight_Enable = 3;
const int motorRight_I1 = 29;
const int motorRight_I2 = 28;

//Gyro-Pin analog (A8)
const int gyro_pin = 8;

//Intialize Encoder Objects
gen2_encoder eright(encoderRight_CH1, encoderRight_CH2, true);
gen2_encoder eleft(encoderLeft_CH1, encoderLeft_CH2, true);
  
//Intialize Motor Object (One motor object controls 2 motors)
gen2_motor m(motorRight_Enable, motorRight_I1, motorRight_I2,motorLeft_Enable, motorLeft_I1, motorLeft_I2);

//Publish/Subscribe Timer durations
long pub_duration = 50;   //Rate in ms to publish encoder topics 
unsigned long pub_timer = 0;

//ROS subscriber Callback functions
void l_cmd_Cb(const std_msgs::Float32& l_motor_cmd)
{
  //Cast to int. Add 0.5 for correct rounding
  int cmd = (int) l_motor_cmd.data + 0.5; 
  
  //Set motor direction
  if(cmd < 0)
    m.left_backward();
  else
    m.left_forward();
  
  //Set motor speed (0-255)  
  m.left_mspeed(abs(cmd));
}

void r_cmd_Cb(const std_msgs::Float32& r_motor_cmd)
{
  //Cast to int. Add 0.5 for correct rounding
  int cmd = (int) r_motor_cmd.data + 0.5; 
  
  //Set motor direction
  if(cmd < 0)
    m.right_backward();
  else
    m.right_forward();
  
  //Set motor speed (0-255)  
  m.right_mspeed(abs(cmd));
}

//Create ROS nodehandle and define messages
ros::NodeHandle  nh;
std_msgs::Int16 l_enc,r_enc, gyro_raw;
sensor_msgs::Range range_msg;
ros::Publisher pub_range1("/ultrasound", &range_msg); //first sonar sensor
ros::Publisher lwheel("lwheel", &l_enc);  //left encoder ticks
ros::Publisher rwheel("rwheel", &r_enc);  //right encoder ticks
ros::Publisher gyro_val("gyro_val", &gyro_raw); //raw gyro value
ros::Subscriber<std_msgs::Float32> l_cmd_sub("l_motor_cmd", &l_cmd_Cb);
ros::Subscriber<std_msgs::Float32> r_cmd_sub("r_motor_cmd", &r_cmd_Cb);

char frameid[] = "/ultrasound";

long duration;

float getRange_Ultrasound(int pin_num)
{
  // The Ping))) i triggered by a HIGH pulse of 2 or moe microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse;
  pinMode(pin_num, OUTPUT);
  digitalWrite(pin_num, LOW);
  delayMicroseconds(2);
  digitalWrite(pin_num, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin_num, LOW);
  
  // same pin to receive
  pinMode(pin_num, INPUT);
  duration = pulseIn(pin_num, HIGH);
  
  // convert time to distance
  return duration/58; // duration/29/2, centimeters
}
  
void setup()
{
  //Interrupt Initialization for Encoder Counting
  attachInterrupt(5, countright, RISING);
  attachInterrupt(4, countleft, RISING);
  
  //ROS setup/advertise/subscribe
  nh.initNode();
  nh.advertise(lwheel);
  nh.advertise(rwheel);
  nh.advertise(gyro_val);
  nh.advertise(pub_range1);
  nh.subscribe(l_cmd_sub);
  nh.subscribe(r_cmd_sub);
  
  int myEraser = 7;
  int myPrescaler =4;
  TCCR3B &= ~myEraser; 
  TCCR3B |= myPrescaler;
  
  range_msg.radiation_type = sensor_msgs::Range::ULTRASOUND;
  range_msg.header.frame_id = frameid;
  range_msg.field_of_view = 0.1; //fake
  range_msg.min_range = 0.0;
  range_msg.max_range = 2.0;
  //Start serial interface
  //Serial.begin(9600);
}

long range_time;

void loop()
{
  //Publish encoder/gyro data every (pub_duration) ms
  if (millis() > pub_timer)
  {
    pub_timer = millis() + pub_duration;
    range_msg.range = getRange_Ultrasound(52);
    range_msg.header.stamp = nh.now();
    pub_range1.publish(&range_msg);
    r_enc.data = eright.totaldistance();
    l_enc.data = eleft.totaldistance();
    gyro_raw.data = analogRead(gyro_pin);
    lwheel.publish( &l_enc );
    rwheel.publish( &r_enc );
    gyro_val.publish( &gyro_raw ); 
  }
    
  nh.spinOnce();
  
  //delay(250);
  //encoder_test();
  //motor_test();
}

//Encoder Interrupt Function Calls------------------------------------------------------
void countright()
{
  eright.count();
}

void countleft()
{
  eleft.count();
}

void encoder_test()
{
  Serial.print("Right Odom: ");
  Serial.println(eright.totaldistance());
  Serial.print("Left Odom: ");
  Serial.println(eleft.totaldistance());
}

void motor_test()
{
  m.left_mspeed(75);
  m.right_mspeed(75);
  m.right_backward();
  m.left_backward();
 m.left_backward();
}
