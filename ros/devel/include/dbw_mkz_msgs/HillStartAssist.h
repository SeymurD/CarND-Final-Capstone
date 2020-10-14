// Generated by gencpp from file dbw_mkz_msgs/HillStartAssist.msg
// DO NOT EDIT!


#ifndef DBW_MKZ_MSGS_MESSAGE_HILLSTARTASSIST_H
#define DBW_MKZ_MSGS_MESSAGE_HILLSTARTASSIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dbw_mkz_msgs
{
template <class ContainerAllocator>
struct HillStartAssist_
{
  typedef HillStartAssist_<ContainerAllocator> Type;

  HillStartAssist_()
    : status(0)
    , mode(0)  {
    }
  HillStartAssist_(const ContainerAllocator& _alloc)
    : status(0)
    , mode(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;

   typedef uint8_t _mode_type;
  _mode_type mode;



  enum {
    STAT_INACTIVE = 0u,
    STAT_FINDING_GRADIENT = 1u,
    STAT_ACTIVE_PRESSED = 2u,
    STAT_ACTIVE_RELEASED = 3u,
    STAT_FAST_RELEASE = 4u,
    STAT_SLOW_RELEASE = 5u,
    STAT_FAILED = 6u,
    STAT_UNDEFINED = 7u,
    MODE_OFF = 0u,
    MODE_AUTO = 1u,
    MODE_MANUAL = 2u,
    MODE_UNDEFINED = 3u,
  };


  typedef boost::shared_ptr< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> const> ConstPtr;

}; // struct HillStartAssist_

typedef ::dbw_mkz_msgs::HillStartAssist_<std::allocator<void> > HillStartAssist;

typedef boost::shared_ptr< ::dbw_mkz_msgs::HillStartAssist > HillStartAssistPtr;
typedef boost::shared_ptr< ::dbw_mkz_msgs::HillStartAssist const> HillStartAssistConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "387491ab93866eae85dd46ccb3f787fc";
  }

  static const char* value(const ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x387491ab93866eaeULL;
  static const uint64_t static_value2 = 0x85dd46ccb3f787fcULL;
};

template<class ContainerAllocator>
struct DataType< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbw_mkz_msgs/HillStartAssist";
  }

  static const char* value(const ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n\
uint8 mode\n\
\n\
uint8 STAT_INACTIVE=0\n\
uint8 STAT_FINDING_GRADIENT=1\n\
uint8 STAT_ACTIVE_PRESSED=2\n\
uint8 STAT_ACTIVE_RELEASED=3\n\
uint8 STAT_FAST_RELEASE=4\n\
uint8 STAT_SLOW_RELEASE=5\n\
uint8 STAT_FAILED=6\n\
uint8 STAT_UNDEFINED=7\n\
\n\
uint8 MODE_OFF=0\n\
uint8 MODE_AUTO=1\n\
uint8 MODE_MANUAL=2\n\
uint8 MODE_UNDEFINED=3\n\
";
  }

  static const char* value(const ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HillStartAssist_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dbw_mkz_msgs::HillStartAssist_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DBW_MKZ_MSGS_MESSAGE_HILLSTARTASSIST_H
