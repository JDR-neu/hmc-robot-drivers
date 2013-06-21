/* Auto-generated by genmsg_cpp for file /home/robotics/ros_workspace/hmc-robot-drivers/irobot_mudd/srv/Dock.srv */
#ifndef IROBOT_MUDD_SERVICE_DOCK_H
#define IROBOT_MUDD_SERVICE_DOCK_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace irobot_mudd
{
template <class ContainerAllocator>
struct DockRequest_ {
  typedef DockRequest_<ContainerAllocator> Type;

  DockRequest_()
  : charge(0)
  {
  }

  DockRequest_(const ContainerAllocator& _alloc)
  : charge(0)
  {
  }

  typedef int8_t _charge_type;
  int8_t charge;


private:
  static const char* __s_getDataType_() { return "irobot_mudd/DockRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "418555f881924774360c9c02f1a4ed54"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "1cb2c2149d6bc0d9c31238b45e300d06"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int8 charge\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, charge);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, charge);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(charge);
    return size;
  }

  typedef boost::shared_ptr< ::irobot_mudd::DockRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_mudd::DockRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct DockRequest
typedef  ::irobot_mudd::DockRequest_<std::allocator<void> > DockRequest;

typedef boost::shared_ptr< ::irobot_mudd::DockRequest> DockRequestPtr;
typedef boost::shared_ptr< ::irobot_mudd::DockRequest const> DockRequestConstPtr;


template <class ContainerAllocator>
struct DockResponse_ {
  typedef DockResponse_<ContainerAllocator> Type;

  DockResponse_()
  : success(false)
  {
  }

  DockResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


private:
  static const char* __s_getDataType_() { return "irobot_mudd/DockResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "358e233cde0c8a8bcfea4ce193f8fc15"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "1cb2c2149d6bc0d9c31238b45e300d06"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "bool success\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, success);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, success);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(success);
    return size;
  }

  typedef boost::shared_ptr< ::irobot_mudd::DockResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_mudd::DockResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct DockResponse
typedef  ::irobot_mudd::DockResponse_<std::allocator<void> > DockResponse;

typedef boost::shared_ptr< ::irobot_mudd::DockResponse> DockResponsePtr;
typedef boost::shared_ptr< ::irobot_mudd::DockResponse const> DockResponseConstPtr;

struct Dock
{

typedef DockRequest Request;
typedef DockResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Dock
} // namespace irobot_mudd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::DockRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::DockRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::irobot_mudd::DockRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "418555f881924774360c9c02f1a4ed54";
  }

  static const char* value(const  ::irobot_mudd::DockRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x418555f881924774ULL;
  static const uint64_t static_value2 = 0x360c9c02f1a4ed54ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_mudd::DockRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/DockRequest";
  }

  static const char* value(const  ::irobot_mudd::DockRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::irobot_mudd::DockRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int8 charge\n\
\n\
";
  }

  static const char* value(const  ::irobot_mudd::DockRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::irobot_mudd::DockRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::DockResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::irobot_mudd::DockResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::irobot_mudd::DockResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::irobot_mudd::DockResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_mudd::DockResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/DockResponse";
  }

  static const char* value(const  ::irobot_mudd::DockResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::irobot_mudd::DockResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::irobot_mudd::DockResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::irobot_mudd::DockResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::irobot_mudd::DockRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.charge);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DockRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::irobot_mudd::DockResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DockResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<irobot_mudd::Dock> {
  static const char* value() 
  {
    return "1cb2c2149d6bc0d9c31238b45e300d06";
  }

  static const char* value(const irobot_mudd::Dock&) { return value(); } 
};

template<>
struct DataType<irobot_mudd::Dock> {
  static const char* value() 
  {
    return "irobot_mudd/Dock";
  }

  static const char* value(const irobot_mudd::Dock&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<irobot_mudd::DockRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1cb2c2149d6bc0d9c31238b45e300d06";
  }

  static const char* value(const irobot_mudd::DockRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<irobot_mudd::DockRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/Dock";
  }

  static const char* value(const irobot_mudd::DockRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<irobot_mudd::DockResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1cb2c2149d6bc0d9c31238b45e300d06";
  }

  static const char* value(const irobot_mudd::DockResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<irobot_mudd::DockResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_mudd/Dock";
  }

  static const char* value(const irobot_mudd::DockResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // IROBOT_MUDD_SERVICE_DOCK_H
