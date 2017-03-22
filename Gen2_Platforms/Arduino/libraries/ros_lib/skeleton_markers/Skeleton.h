#ifndef _ROS_skeleton_markers_Skeleton_h
#define _ROS_skeleton_markers_Skeleton_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Quaternion.h"

namespace skeleton_markers
{

  class Skeleton : public ros::Msg
  {
    public:
      std_msgs::Header header;
      int32_t user_id;
      uint8_t name_length;
      char* st_name;
      char* * name;
      uint8_t confidence_length;
      float st_confidence;
      float * confidence;
      uint8_t position_length;
      geometry_msgs::Vector3 st_position;
      geometry_msgs::Vector3 * position;
      uint8_t orientation_length;
      geometry_msgs::Quaternion st_orientation;
      geometry_msgs::Quaternion * orientation;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_user_id;
      u_user_id.real = this->user_id;
      *(outbuffer + offset + 0) = (u_user_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_user_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_user_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_user_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->user_id);
      *(outbuffer + offset++) = name_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < name_length; i++){
      uint32_t length_namei = strlen(this->name[i]);
      memcpy(outbuffer + offset, &length_namei, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->name[i], length_namei);
      offset += length_namei;
      }
      *(outbuffer + offset++) = confidence_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < confidence_length; i++){
      union {
        float real;
        uint32_t base;
      } u_confidencei;
      u_confidencei.real = this->confidence[i];
      *(outbuffer + offset + 0) = (u_confidencei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_confidencei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_confidencei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_confidencei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->confidence[i]);
      }
      *(outbuffer + offset++) = position_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < position_length; i++){
      offset += this->position[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset++) = orientation_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < orientation_length; i++){
      offset += this->orientation[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_user_id;
      u_user_id.base = 0;
      u_user_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_user_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_user_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_user_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->user_id = u_user_id.real;
      offset += sizeof(this->user_id);
      uint8_t name_lengthT = *(inbuffer + offset++);
      if(name_lengthT > name_length)
        this->name = (char**)realloc(this->name, name_lengthT * sizeof(char*));
      offset += 3;
      name_length = name_lengthT;
      for( uint8_t i = 0; i < name_length; i++){
      uint32_t length_st_name;
      memcpy(&length_st_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_name-1]=0;
      this->st_name = (char *)(inbuffer + offset-1);
      offset += length_st_name;
        memcpy( &(this->name[i]), &(this->st_name), sizeof(char*));
      }
      uint8_t confidence_lengthT = *(inbuffer + offset++);
      if(confidence_lengthT > confidence_length)
        this->confidence = (float*)realloc(this->confidence, confidence_lengthT * sizeof(float));
      offset += 3;
      confidence_length = confidence_lengthT;
      for( uint8_t i = 0; i < confidence_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_confidence;
      u_st_confidence.base = 0;
      u_st_confidence.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_confidence.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_confidence.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_confidence.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_confidence = u_st_confidence.real;
      offset += sizeof(this->st_confidence);
        memcpy( &(this->confidence[i]), &(this->st_confidence), sizeof(float));
      }
      uint8_t position_lengthT = *(inbuffer + offset++);
      if(position_lengthT > position_length)
        this->position = (geometry_msgs::Vector3*)realloc(this->position, position_lengthT * sizeof(geometry_msgs::Vector3));
      offset += 3;
      position_length = position_lengthT;
      for( uint8_t i = 0; i < position_length; i++){
      offset += this->st_position.deserialize(inbuffer + offset);
        memcpy( &(this->position[i]), &(this->st_position), sizeof(geometry_msgs::Vector3));
      }
      uint8_t orientation_lengthT = *(inbuffer + offset++);
      if(orientation_lengthT > orientation_length)
        this->orientation = (geometry_msgs::Quaternion*)realloc(this->orientation, orientation_lengthT * sizeof(geometry_msgs::Quaternion));
      offset += 3;
      orientation_length = orientation_lengthT;
      for( uint8_t i = 0; i < orientation_length; i++){
      offset += this->st_orientation.deserialize(inbuffer + offset);
        memcpy( &(this->orientation[i]), &(this->st_orientation), sizeof(geometry_msgs::Quaternion));
      }
     return offset;
    }

    const char * getType(){ return "skeleton_markers/Skeleton"; };
    const char * getMD5(){ return "34722af981b6a61700ff31df5a97c2e0"; };

  };

}
#endif