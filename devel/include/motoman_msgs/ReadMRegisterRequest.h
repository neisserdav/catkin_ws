// Generated by gencpp from file motoman_msgs/ReadMRegisterRequest.msg
// DO NOT EDIT!


#ifndef MOTOMAN_MSGS_MESSAGE_READMREGISTERREQUEST_H
#define MOTOMAN_MSGS_MESSAGE_READMREGISTERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motoman_msgs
{
template <class ContainerAllocator>
struct ReadMRegisterRequest_
{
  typedef ReadMRegisterRequest_<ContainerAllocator> Type;

  ReadMRegisterRequest_()
    : address(0)  {
    }
  ReadMRegisterRequest_(const ContainerAllocator& _alloc)
    : address(0)  {
  (void)_alloc;
    }



   typedef uint32_t _address_type;
  _address_type address;





  typedef boost::shared_ptr< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ReadMRegisterRequest_

typedef ::motoman_msgs::ReadMRegisterRequest_<std::allocator<void> > ReadMRegisterRequest;

typedef boost::shared_ptr< ::motoman_msgs::ReadMRegisterRequest > ReadMRegisterRequestPtr;
typedef boost::shared_ptr< ::motoman_msgs::ReadMRegisterRequest const> ReadMRegisterRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator1> & lhs, const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator2> & rhs)
{
  return lhs.address == rhs.address;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator1> & lhs, const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motoman_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7522928648cae826d000156b5f561c00";
  }

  static const char* value(const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7522928648cae826ULL;
  static const uint64_t static_value2 = 0xd000156b5f561c00ULL;
};

template<class ContainerAllocator>
struct DataType< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motoman_msgs/ReadMRegisterRequest";
  }

  static const char* value(const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# Read (and return) the current value of the M register at 'address'.\n"
"#\n"
"# Addresses are plain, base-10 integers, as used and displayed by the controller\n"
"# (on the teach pendant for instance).\n"
"#\n"
"# Only the following addresses can be read from:\n"
"#\n"
"#  - 0 to 999\n"
"#\n"
"# NOTE 1: do not add 1000000 to the address, MotoROS will do this when\n"
"#         necessary.\n"
"#\n"
"# NOTE 2: many programming languages will parse literals starting with '0' as\n"
"#         octal numbers. Do not add leading zeros to register addresses to avoid\n"
"#         specifying the wrong register to read.\n"
"#\n"
"# Refer also the Yaskawa Motoman documentation on IO addressing and\n"
"# configuration.\n"
"\n"
"uint32 address\n"
;
  }

  static const char* value(const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReadMRegisterRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motoman_msgs::ReadMRegisterRequest_<ContainerAllocator>& v)
  {
    s << indent << "address: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.address);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOMAN_MSGS_MESSAGE_READMREGISTERREQUEST_H
