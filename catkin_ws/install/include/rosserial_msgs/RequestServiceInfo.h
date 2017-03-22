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
 * Auto-generated by gensrv_cpp from file /home/jian/catkin_ws/src/rosserial/rosserial_msgs/srv/RequestServiceInfo.srv
 *
 */


#ifndef ROSSERIAL_MSGS_MESSAGE_REQUESTSERVICEINFO_H
#define ROSSERIAL_MSGS_MESSAGE_REQUESTSERVICEINFO_H

#include <ros/service_traits.h>


#include <rosserial_msgs/RequestServiceInfoRequest.h>
#include <rosserial_msgs/RequestServiceInfoResponse.h>


namespace rosserial_msgs
{

struct RequestServiceInfo
{

typedef RequestServiceInfoRequest Request;
typedef RequestServiceInfoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RequestServiceInfo
} // namespace rosserial_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosserial_msgs::RequestServiceInfo > {
  static const char* value()
  {
    return "0961604b984b94b0b68e8074882be071";
  }

  static const char* value(const ::rosserial_msgs::RequestServiceInfo&) { return value(); }
};

template<>
struct DataType< ::rosserial_msgs::RequestServiceInfo > {
  static const char* value()
  {
    return "rosserial_msgs/RequestServiceInfo";
  }

  static const char* value(const ::rosserial_msgs::RequestServiceInfo&) { return value(); }
};


// service_traits::MD5Sum< ::rosserial_msgs::RequestServiceInfoRequest> should match 
// service_traits::MD5Sum< ::rosserial_msgs::RequestServiceInfo > 
template<>
struct MD5Sum< ::rosserial_msgs::RequestServiceInfoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosserial_msgs::RequestServiceInfo >::value();
  }
  static const char* value(const ::rosserial_msgs::RequestServiceInfoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosserial_msgs::RequestServiceInfoRequest> should match 
// service_traits::DataType< ::rosserial_msgs::RequestServiceInfo > 
template<>
struct DataType< ::rosserial_msgs::RequestServiceInfoRequest>
{
  static const char* value()
  {
    return DataType< ::rosserial_msgs::RequestServiceInfo >::value();
  }
  static const char* value(const ::rosserial_msgs::RequestServiceInfoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosserial_msgs::RequestServiceInfoResponse> should match 
// service_traits::MD5Sum< ::rosserial_msgs::RequestServiceInfo > 
template<>
struct MD5Sum< ::rosserial_msgs::RequestServiceInfoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosserial_msgs::RequestServiceInfo >::value();
  }
  static const char* value(const ::rosserial_msgs::RequestServiceInfoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosserial_msgs::RequestServiceInfoResponse> should match 
// service_traits::DataType< ::rosserial_msgs::RequestServiceInfo > 
template<>
struct DataType< ::rosserial_msgs::RequestServiceInfoResponse>
{
  static const char* value()
  {
    return DataType< ::rosserial_msgs::RequestServiceInfo >::value();
  }
  static const char* value(const ::rosserial_msgs::RequestServiceInfoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSSERIAL_MSGS_MESSAGE_REQUESTSERVICEINFO_H