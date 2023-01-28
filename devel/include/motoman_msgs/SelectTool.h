// Generated by gencpp from file motoman_msgs/SelectTool.msg
// DO NOT EDIT!


#ifndef MOTOMAN_MSGS_MESSAGE_SELECTTOOL_H
#define MOTOMAN_MSGS_MESSAGE_SELECTTOOL_H

#include <ros/service_traits.h>


#include <motoman_msgs/SelectToolRequest.h>
#include <motoman_msgs/SelectToolResponse.h>


namespace motoman_msgs
{

struct SelectTool
{

typedef SelectToolRequest Request;
typedef SelectToolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SelectTool
} // namespace motoman_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::motoman_msgs::SelectTool > {
  static const char* value()
  {
    return "afb2fb884fcd9c28c81c82056d543156";
  }

  static const char* value(const ::motoman_msgs::SelectTool&) { return value(); }
};

template<>
struct DataType< ::motoman_msgs::SelectTool > {
  static const char* value()
  {
    return "motoman_msgs/SelectTool";
  }

  static const char* value(const ::motoman_msgs::SelectTool&) { return value(); }
};


// service_traits::MD5Sum< ::motoman_msgs::SelectToolRequest> should match
// service_traits::MD5Sum< ::motoman_msgs::SelectTool >
template<>
struct MD5Sum< ::motoman_msgs::SelectToolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::motoman_msgs::SelectTool >::value();
  }
  static const char* value(const ::motoman_msgs::SelectToolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::motoman_msgs::SelectToolRequest> should match
// service_traits::DataType< ::motoman_msgs::SelectTool >
template<>
struct DataType< ::motoman_msgs::SelectToolRequest>
{
  static const char* value()
  {
    return DataType< ::motoman_msgs::SelectTool >::value();
  }
  static const char* value(const ::motoman_msgs::SelectToolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::motoman_msgs::SelectToolResponse> should match
// service_traits::MD5Sum< ::motoman_msgs::SelectTool >
template<>
struct MD5Sum< ::motoman_msgs::SelectToolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::motoman_msgs::SelectTool >::value();
  }
  static const char* value(const ::motoman_msgs::SelectToolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::motoman_msgs::SelectToolResponse> should match
// service_traits::DataType< ::motoman_msgs::SelectTool >
template<>
struct DataType< ::motoman_msgs::SelectToolResponse>
{
  static const char* value()
  {
    return DataType< ::motoman_msgs::SelectTool >::value();
  }
  static const char* value(const ::motoman_msgs::SelectToolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOTOMAN_MSGS_MESSAGE_SELECTTOOL_H