// Generated by gencpp from file opencv_apps/MomentArray.msg
// DO NOT EDIT!


#ifndef OPENCV_APPS_MESSAGE_MOMENTARRAY_H
#define OPENCV_APPS_MESSAGE_MOMENTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <opencv_apps/Moment.h>

namespace opencv_apps
{
template <class ContainerAllocator>
struct MomentArray_
{
  typedef MomentArray_<ContainerAllocator> Type;

  MomentArray_()
    : moments()  {
    }
  MomentArray_(const ContainerAllocator& _alloc)
    : moments(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::opencv_apps::Moment_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::opencv_apps::Moment_<ContainerAllocator> >::other >  _moments_type;
  _moments_type moments;




  typedef boost::shared_ptr< ::opencv_apps::MomentArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::opencv_apps::MomentArray_<ContainerAllocator> const> ConstPtr;

}; // struct MomentArray_

typedef ::opencv_apps::MomentArray_<std::allocator<void> > MomentArray;

typedef boost::shared_ptr< ::opencv_apps::MomentArray > MomentArrayPtr;
typedef boost::shared_ptr< ::opencv_apps::MomentArray const> MomentArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::opencv_apps::MomentArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::opencv_apps::MomentArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace opencv_apps

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'opencv_apps': ['/home/riki/catkin_ws/src/opencv_apps/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::MomentArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::MomentArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::MomentArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::MomentArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::MomentArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::MomentArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::opencv_apps::MomentArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fb51ddd1dea5da45f56842efe759d448";
  }

  static const char* value(const ::opencv_apps::MomentArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfb51ddd1dea5da45ULL;
  static const uint64_t static_value2 = 0xf56842efe759d448ULL;
};

template<class ContainerAllocator>
struct DataType< ::opencv_apps::MomentArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "opencv_apps/MomentArray";
  }

  static const char* value(const ::opencv_apps::MomentArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::opencv_apps::MomentArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Moment[] moments\n\
\n\
================================================================================\n\
MSG: opencv_apps/Moment\n\
# spatial moments\n\
float64 m00\n\
float64 m10\n\
float64 m01\n\
float64 m20\n\
float64 m11\n\
float64 m02\n\
float64 m30\n\
float64 m21\n\
float64 m12\n\
float64 m03\n\
\n\
# central moments\n\
float64 mu20\n\
float64 mu11\n\
float64 mu02\n\
float64 mu30\n\
float64 mu21\n\
float64 mu12\n\
float64 mu03\n\
\n\
# central normalized moments\n\
float64 nu20\n\
float64 nu11\n\
float64 nu02\n\
float64 nu30\n\
float64 nu21\n\
float64 nu12\n\
float64 nu03\n\
\n\
# center of mass m10/m00, m01/m00\n\
Point2D center\n\
float64 length\n\
float64 area\n\
\n\
================================================================================\n\
MSG: opencv_apps/Point2D\n\
float64 x\n\
float64 y\n\
\n\
";
  }

  static const char* value(const ::opencv_apps::MomentArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::opencv_apps::MomentArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.moments);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MomentArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::opencv_apps::MomentArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::opencv_apps::MomentArray_<ContainerAllocator>& v)
  {
    s << indent << "moments[]" << std::endl;
    for (size_t i = 0; i < v.moments.size(); ++i)
    {
      s << indent << "  moments[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::opencv_apps::Moment_<ContainerAllocator> >::stream(s, indent + "    ", v.moments[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPENCV_APPS_MESSAGE_MOMENTARRAY_H