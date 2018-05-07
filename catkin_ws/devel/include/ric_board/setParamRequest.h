// Generated by gencpp from file ric_board/setParamRequest.msg
// DO NOT EDIT!


#ifndef RIC_BOARD_MESSAGE_SETPARAMREQUEST_H
#define RIC_BOARD_MESSAGE_SETPARAMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ric_board/DevStatus.h>

namespace ric_board
{
template <class ContainerAllocator>
struct setParamRequest_
{
  typedef setParamRequest_<ContainerAllocator> Type;

  setParamRequest_()
    : dev()  {
    }
  setParamRequest_(const ContainerAllocator& _alloc)
    : dev(_alloc)  {
  (void)_alloc;
    }



   typedef  ::ric_board::DevStatus_<ContainerAllocator>  _dev_type;
  _dev_type dev;




  typedef boost::shared_ptr< ::ric_board::setParamRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ric_board::setParamRequest_<ContainerAllocator> const> ConstPtr;

}; // struct setParamRequest_

typedef ::ric_board::setParamRequest_<std::allocator<void> > setParamRequest;

typedef boost::shared_ptr< ::ric_board::setParamRequest > setParamRequestPtr;
typedef boost::shared_ptr< ::ric_board::setParamRequest const> setParamRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ric_board::setParamRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ric_board::setParamRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ric_board

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'ric_board': ['/users/studs/bsc/2016/sdanie/catkin_ws/src/robotican/ric_board/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ric_board::setParamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ric_board::setParamRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_board::setParamRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ric_board::setParamRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_board::setParamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ric_board::setParamRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ric_board::setParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "edcc02021d0e97fc8b7bab763bf17b1f";
  }

  static const char* value(const ::ric_board::setParamRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xedcc02021d0e97fcULL;
  static const uint64_t static_value2 = 0x8b7bab763bf17b1fULL;
};

template<class ContainerAllocator>
struct DataType< ::ric_board::setParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ric_board/setParamRequest";
  }

  static const char* value(const ::ric_board::setParamRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ric_board::setParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "DevStatus dev\n\
\n\
================================================================================\n\
MSG: ric_board/DevStatus\n\
string devName\n\
int8 type\n\
float32[] values\n\
\n\
";
  }

  static const char* value(const ::ric_board::setParamRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ric_board::setParamRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dev);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct setParamRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ric_board::setParamRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ric_board::setParamRequest_<ContainerAllocator>& v)
  {
    s << indent << "dev: ";
    s << std::endl;
    Printer< ::ric_board::DevStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.dev);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIC_BOARD_MESSAGE_SETPARAMREQUEST_H
