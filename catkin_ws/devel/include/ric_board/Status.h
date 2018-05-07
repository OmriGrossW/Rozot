// Generated by gencpp from file ric_board/Status.msg
// DO NOT EDIT!


#ifndef RIC_BOARD_MESSAGE_STATUS_H
#define RIC_BOARD_MESSAGE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ric_board
{
template <class ContainerAllocator>
struct Status_
{
  typedef Status_<ContainerAllocator> Type;

  Status_()
    : faults(0)
    , battery_voltage(0.0)  {
    }
  Status_(const ContainerAllocator& _alloc)
    : faults(0)
    , battery_voltage(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _faults_type;
  _faults_type faults;

   typedef float _battery_voltage_type;
  _battery_voltage_type battery_voltage;




  typedef boost::shared_ptr< ::ric_board::Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ric_board::Status_<ContainerAllocator> const> ConstPtr;

}; // struct Status_

typedef ::ric_board::Status_<std::allocator<void> > Status;

typedef boost::shared_ptr< ::ric_board::Status > StatusPtr;
typedef boost::shared_ptr< ::ric_board::Status const> StatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ric_board::Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ric_board::Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ric_board

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'ric_board': ['/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ric_board::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ric_board::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_board::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_board::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_board::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_board::Status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ric_board::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f66cc2fe91fb70d2b82c88e7c03227df";
  }

  static const char* value(const ::ric_board::Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf66cc2fe91fb70d2ULL;
  static const uint64_t static_value2 = 0xb82c88e7c03227dfULL;
};

template<class ContainerAllocator>
struct DataType< ::ric_board::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ric_board/Status";
  }

  static const char* value(const ::ric_board::Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ric_board::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 faults\n\
float32 battery_voltage\n\
\n\
";
  }

  static const char* value(const ::ric_board::Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ric_board::Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.faults);
      stream.next(m.battery_voltage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ric_board::Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ric_board::Status_<ContainerAllocator>& v)
  {
    s << indent << "faults: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.faults);
    s << indent << "battery_voltage: ";
    Printer<float>::stream(s, indent + "  ", v.battery_voltage);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIC_BOARD_MESSAGE_STATUS_H
