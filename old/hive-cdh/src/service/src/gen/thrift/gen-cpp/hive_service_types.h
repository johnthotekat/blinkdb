/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef hive_service_TYPES_H
#define hive_service_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>

#include "fb303_types.h"
#include "hive_metastore_types.h"
#include "queryplan_types.h"


namespace Apache { namespace Hadoop { namespace Hive {

struct JobTrackerState {
  enum type {
    INITIALIZING = 1,
    RUNNING = 2
  };
};

typedef struct _HiveClusterStatus__isset {
  _HiveClusterStatus__isset() : taskTrackers(false), mapTasks(false), reduceTasks(false), maxMapTasks(false), maxReduceTasks(false), state(false) {}
  bool taskTrackers;
  bool mapTasks;
  bool reduceTasks;
  bool maxMapTasks;
  bool maxReduceTasks;
  bool state;
} _HiveClusterStatus__isset;

class HiveClusterStatus {
 public:

  static const char* ascii_fingerprint; // = "D514EDCFFC86F64A2E924DCD16D4FAD8";
  static const uint8_t binary_fingerprint[16]; // = {0xD5,0x14,0xED,0xCF,0xFC,0x86,0xF6,0x4A,0x2E,0x92,0x4D,0xCD,0x16,0xD4,0xFA,0xD8};

  HiveClusterStatus() : taskTrackers(0), mapTasks(0), reduceTasks(0), maxMapTasks(0), maxReduceTasks(0) {
  }

  virtual ~HiveClusterStatus() throw() {}

  int32_t taskTrackers;
  int32_t mapTasks;
  int32_t reduceTasks;
  int32_t maxMapTasks;
  int32_t maxReduceTasks;
  JobTrackerState::type state;

  _HiveClusterStatus__isset __isset;

  bool operator == (const HiveClusterStatus & rhs) const
  {
    if (!(taskTrackers == rhs.taskTrackers))
      return false;
    if (!(mapTasks == rhs.mapTasks))
      return false;
    if (!(reduceTasks == rhs.reduceTasks))
      return false;
    if (!(maxMapTasks == rhs.maxMapTasks))
      return false;
    if (!(maxReduceTasks == rhs.maxReduceTasks))
      return false;
    if (!(state == rhs.state))
      return false;
    return true;
  }
  bool operator != (const HiveClusterStatus &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HiveClusterStatus & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HiveServerException__isset {
  _HiveServerException__isset() : message(false), errorCode(false), SQLState(false) {}
  bool message;
  bool errorCode;
  bool SQLState;
} _HiveServerException__isset;

class HiveServerException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "70563A0628F75DF9555F4D24690B1E26";
  static const uint8_t binary_fingerprint[16]; // = {0x70,0x56,0x3A,0x06,0x28,0xF7,0x5D,0xF9,0x55,0x5F,0x4D,0x24,0x69,0x0B,0x1E,0x26};

  HiveServerException() : message(""), errorCode(0), SQLState("") {
  }

  virtual ~HiveServerException() throw() {}

  std::string message;
  int32_t errorCode;
  std::string SQLState;

  _HiveServerException__isset __isset;

  bool operator == (const HiveServerException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    if (!(errorCode == rhs.errorCode))
      return false;
    if (!(SQLState == rhs.SQLState))
      return false;
    return true;
  }
  bool operator != (const HiveServerException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HiveServerException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

}}} // namespace

#endif
