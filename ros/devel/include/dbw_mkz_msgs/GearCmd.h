// Generated by gencpp from file dbw_mkz_msgs/GearCmd.msg
// DO NOT EDIT!


#ifndef DBW_MKZ_MSGS_MESSAGE_GEARCMD_H
#define DBW_MKZ_MSGS_MESSAGE_GEARCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dbw_mkz_msgs/Gear.h>

namespace dbw_mkz_msgs
{
template <class ContainerAllocator>
struct GearCmd_
{
  typedef GearCmd_<ContainerAllocator> Type;

  GearCmd_()
    : cmd()
    , clear(false)  {
    }
  GearCmd_(const ContainerAllocator& _alloc)
    : cmd(_alloc)
    , clear(false)  {
  (void)_alloc;
    }



   typedef  ::dbw_mkz_msgs::Gear_<ContainerAllocator>  _cmd_type;
  _cmd_type cmd;

   typedef uint8_t _clear_type;
  _clear_type clear;





  typedef boost::shared_ptr< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> const> ConstPtr;

}; // struct GearCmd_

typedef ::dbw_mkz_msgs::GearCmd_<std::allocator<void> > GearCmd;

typedef boost::shared_ptr< ::dbw_mkz_msgs::GearCmd > GearCmdPtr;
typedef boost::shared_ptr< ::dbw_mkz_msgs::GearCmd const> GearCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dbw_mkz_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/seymur/Documents/Projects/CarND-Final-Capstone/ros/src/dbw_mkz_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "14694bb9a291d2a80b8033843d95776e";
  }

  static const char* value(const ::dbw_mkz_msgs::GearCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x14694bb9a291d2a8ULL;
  static const uint64_t static_value2 = 0x0b8033843d95776eULL;
};

template<class ContainerAllocator>
struct DataType< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbw_mkz_msgs/GearCmd";
  }

  static const char* value(const ::dbw_mkz_msgs::GearCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Gear command enumeration\n\
Gear cmd\n\
\n\
# Clear driver overrides\n\
bool clear\n\
\n\
================================================================================\n\
MSG: dbw_mkz_msgs/Gear\n\
uint8 gear\n\
\n\
uint8 NONE=0\n\
uint8 PARK=1\n\
uint8 REVERSE=2\n\
uint8 NEUTRAL=3\n\
uint8 DRIVE=4\n\
uint8 LOW=5\n\
";
  }

  static const char* value(const ::dbw_mkz_msgs::GearCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.clear);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GearCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dbw_mkz_msgs::GearCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dbw_mkz_msgs::GearCmd_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    s << std::endl;
    Printer< ::dbw_mkz_msgs::Gear_<ContainerAllocator> >::stream(s, indent + "  ", v.cmd);
    s << indent << "clear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DBW_MKZ_MSGS_MESSAGE_GEARCMD_H
