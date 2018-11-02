// Generated by gencpp from file autoware_msgs/ConfigLaneRule.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_CONFIGLANERULE_H
#define AUTOWARE_MSGS_MESSAGE_CONFIGLANERULE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct ConfigLaneRule_
{
  typedef ConfigLaneRule_<ContainerAllocator> Type;

  ConfigLaneRule_()
    : header()
    , acceleration(0.0)
    , stopline_search_radius(0.0)
    , number_of_zeros_ahead(0)
    , number_of_zeros_behind(0)
    , number_of_smoothing_count(0)  {
    }
  ConfigLaneRule_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , acceleration(0.0)
    , stopline_search_radius(0.0)
    , number_of_zeros_ahead(0)
    , number_of_zeros_behind(0)
    , number_of_smoothing_count(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _acceleration_type;
  _acceleration_type acceleration;

   typedef float _stopline_search_radius_type;
  _stopline_search_radius_type stopline_search_radius;

   typedef int32_t _number_of_zeros_ahead_type;
  _number_of_zeros_ahead_type number_of_zeros_ahead;

   typedef int32_t _number_of_zeros_behind_type;
  _number_of_zeros_behind_type number_of_zeros_behind;

   typedef int32_t _number_of_smoothing_count_type;
  _number_of_smoothing_count_type number_of_smoothing_count;





  typedef boost::shared_ptr< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigLaneRule_

typedef ::autoware_msgs::ConfigLaneRule_<std::allocator<void> > ConfigLaneRule;

typedef boost::shared_ptr< ::autoware_msgs::ConfigLaneRule > ConfigLaneRulePtr;
typedef boost::shared_ptr< ::autoware_msgs::ConfigLaneRule const> ConfigLaneRuleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'autoware_msgs': ['/home/ora/Autoware/ros/src/msgs/autoware_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >
{
  static const char* value()
  {
    return "186844f4cf4fe2d56c23516198932aa0";
  }

  static const char* value(const ::autoware_msgs::ConfigLaneRule_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x186844f4cf4fe2d5ULL;
  static const uint64_t static_value2 = 0x6c23516198932aa0ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ConfigLaneRule";
  }

  static const char* value(const ::autoware_msgs::ConfigLaneRule_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 acceleration\n\
float32 stopline_search_radius\n\
int32 number_of_zeros_ahead\n\
int32 number_of_zeros_behind\n\
int32 number_of_smoothing_count\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::autoware_msgs::ConfigLaneRule_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.acceleration);
      stream.next(m.stopline_search_radius);
      stream.next(m.number_of_zeros_ahead);
      stream.next(m.number_of_zeros_behind);
      stream.next(m.number_of_smoothing_count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigLaneRule_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ConfigLaneRule_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ConfigLaneRule_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "acceleration: ";
    Printer<float>::stream(s, indent + "  ", v.acceleration);
    s << indent << "stopline_search_radius: ";
    Printer<float>::stream(s, indent + "  ", v.stopline_search_radius);
    s << indent << "number_of_zeros_ahead: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_of_zeros_ahead);
    s << indent << "number_of_zeros_behind: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_of_zeros_behind);
    s << indent << "number_of_smoothing_count: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_of_smoothing_count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_CONFIGLANERULE_H
