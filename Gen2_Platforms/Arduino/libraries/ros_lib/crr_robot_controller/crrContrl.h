#ifndef _ROS_crr_robot_controller_crrContrl_h
#define _ROS_crr_robot_controller_crrContrl_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace crr_robot_controller
{

  class crrContrl : public ros::Msg
  {
    public:
      uint8_t direction;
      uint8_t mode;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->direction >> (8 * 0)) & 0xFF;
      offset += sizeof(this->direction);
      *(outbuffer + offset + 0) = (this->mode >> (8 * 0)) & 0xFF;
      offset += sizeof(this->mode);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->direction =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->direction);
      this->mode =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->mode);
     return offset;
    }

    const char * getType(){ return "crr_robot_controller/crrContrl"; };
    const char * getMD5(){ return "705346ba406dd3cf9e01f15a21777279"; };

  };

}
#endif