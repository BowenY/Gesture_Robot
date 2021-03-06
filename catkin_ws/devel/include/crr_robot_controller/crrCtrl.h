/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/jian/catkin_ws/src/crr_robot_controller/srv/crrCtrl.srv
 *
 */


#ifndef CRR_ROBOT_CONTROLLER_MESSAGE_CRRCTRL_H
#define CRR_ROBOT_CONTROLLER_MESSAGE_CRRCTRL_H

#include <ros/service_traits.h>


#include <crr_robot_controller/crrCtrlRequest.h>
#include <crr_robot_controller/crrCtrlResponse.h>


namespace crr_robot_controller
{

struct crrCtrl
{

typedef crrCtrlRequest Request;
typedef crrCtrlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct crrCtrl
} // namespace crr_robot_controller


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::crr_robot_controller::crrCtrl > {
  static const char* value()
  {
    return "26ed05ce104f8ffa03e251eddea0744b";
  }

  static const char* value(const ::crr_robot_controller::crrCtrl&) { return value(); }
};

template<>
struct DataType< ::crr_robot_controller::crrCtrl > {
  static const char* value()
  {
    return "crr_robot_controller/crrCtrl";
  }

  static const char* value(const ::crr_robot_controller::crrCtrl&) { return value(); }
};


// service_traits::MD5Sum< ::crr_robot_controller::crrCtrlRequest> should match 
// service_traits::MD5Sum< ::crr_robot_controller::crrCtrl > 
template<>
struct MD5Sum< ::crr_robot_controller::crrCtrlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::crr_robot_controller::crrCtrl >::value();
  }
  static const char* value(const ::crr_robot_controller::crrCtrlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::crr_robot_controller::crrCtrlRequest> should match 
// service_traits::DataType< ::crr_robot_controller::crrCtrl > 
template<>
struct DataType< ::crr_robot_controller::crrCtrlRequest>
{
  static const char* value()
  {
    return DataType< ::crr_robot_controller::crrCtrl >::value();
  }
  static const char* value(const ::crr_robot_controller::crrCtrlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::crr_robot_controller::crrCtrlResponse> should match 
// service_traits::MD5Sum< ::crr_robot_controller::crrCtrl > 
template<>
struct MD5Sum< ::crr_robot_controller::crrCtrlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::crr_robot_controller::crrCtrl >::value();
  }
  static const char* value(const ::crr_robot_controller::crrCtrlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::crr_robot_controller::crrCtrlResponse> should match 
// service_traits::DataType< ::crr_robot_controller::crrCtrl > 
template<>
struct DataType< ::crr_robot_controller::crrCtrlResponse>
{
  static const char* value()
  {
    return DataType< ::crr_robot_controller::crrCtrl >::value();
  }
  static const char* value(const ::crr_robot_controller::crrCtrlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CRR_ROBOT_CONTROLLER_MESSAGE_CRRCTRL_H
