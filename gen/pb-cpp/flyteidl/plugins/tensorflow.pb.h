// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/plugins/tensorflow.proto

#ifndef PROTOBUF_INCLUDED_flyteidl_2fplugins_2ftensorflow_2eproto
#define PROTOBUF_INCLUDED_flyteidl_2fplugins_2ftensorflow_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_flyteidl_2fplugins_2ftensorflow_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_flyteidl_2fplugins_2ftensorflow_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_flyteidl_2fplugins_2ftensorflow_2eproto();
namespace flyteidl {
namespace plugins {
class DistributedTensorflowTrainingTask;
class DistributedTensorflowTrainingTaskDefaultTypeInternal;
extern DistributedTensorflowTrainingTaskDefaultTypeInternal _DistributedTensorflowTrainingTask_default_instance_;
}  // namespace plugins
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> ::flyteidl::plugins::DistributedTensorflowTrainingTask* Arena::CreateMaybeMessage<::flyteidl::plugins::DistributedTensorflowTrainingTask>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace flyteidl {
namespace plugins {

// ===================================================================

class DistributedTensorflowTrainingTask final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.plugins.DistributedTensorflowTrainingTask) */ {
 public:
  DistributedTensorflowTrainingTask();
  virtual ~DistributedTensorflowTrainingTask();

  DistributedTensorflowTrainingTask(const DistributedTensorflowTrainingTask& from);

  inline DistributedTensorflowTrainingTask& operator=(const DistributedTensorflowTrainingTask& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DistributedTensorflowTrainingTask(DistributedTensorflowTrainingTask&& from) noexcept
    : DistributedTensorflowTrainingTask() {
    *this = ::std::move(from);
  }

  inline DistributedTensorflowTrainingTask& operator=(DistributedTensorflowTrainingTask&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const DistributedTensorflowTrainingTask& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DistributedTensorflowTrainingTask* internal_default_instance() {
    return reinterpret_cast<const DistributedTensorflowTrainingTask*>(
               &_DistributedTensorflowTrainingTask_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DistributedTensorflowTrainingTask* other);
  friend void swap(DistributedTensorflowTrainingTask& a, DistributedTensorflowTrainingTask& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DistributedTensorflowTrainingTask* New() const final {
    return CreateMaybeMessage<DistributedTensorflowTrainingTask>(nullptr);
  }

  DistributedTensorflowTrainingTask* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DistributedTensorflowTrainingTask>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DistributedTensorflowTrainingTask& from);
  void MergeFrom(const DistributedTensorflowTrainingTask& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DistributedTensorflowTrainingTask* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 workers = 1;
  void clear_workers();
  static const int kWorkersFieldNumber = 1;
  ::google::protobuf::int32 workers() const;
  void set_workers(::google::protobuf::int32 value);

  // int32 ps = 2;
  void clear_ps();
  static const int kPsFieldNumber = 2;
  ::google::protobuf::int32 ps() const;
  void set_ps(::google::protobuf::int32 value);

  // int32 chief = 3;
  void clear_chief();
  static const int kChiefFieldNumber = 3;
  ::google::protobuf::int32 chief() const;
  void set_chief(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:flyteidl.plugins.DistributedTensorflowTrainingTask)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 workers_;
  ::google::protobuf::int32 ps_;
  ::google::protobuf::int32 chief_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fplugins_2ftensorflow_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DistributedTensorflowTrainingTask

// int32 workers = 1;
inline void DistributedTensorflowTrainingTask::clear_workers() {
  workers_ = 0;
}
inline ::google::protobuf::int32 DistributedTensorflowTrainingTask::workers() const {
  // @@protoc_insertion_point(field_get:flyteidl.plugins.DistributedTensorflowTrainingTask.workers)
  return workers_;
}
inline void DistributedTensorflowTrainingTask::set_workers(::google::protobuf::int32 value) {
  
  workers_ = value;
  // @@protoc_insertion_point(field_set:flyteidl.plugins.DistributedTensorflowTrainingTask.workers)
}

// int32 ps = 2;
inline void DistributedTensorflowTrainingTask::clear_ps() {
  ps_ = 0;
}
inline ::google::protobuf::int32 DistributedTensorflowTrainingTask::ps() const {
  // @@protoc_insertion_point(field_get:flyteidl.plugins.DistributedTensorflowTrainingTask.ps)
  return ps_;
}
inline void DistributedTensorflowTrainingTask::set_ps(::google::protobuf::int32 value) {
  
  ps_ = value;
  // @@protoc_insertion_point(field_set:flyteidl.plugins.DistributedTensorflowTrainingTask.ps)
}

// int32 chief = 3;
inline void DistributedTensorflowTrainingTask::clear_chief() {
  chief_ = 0;
}
inline ::google::protobuf::int32 DistributedTensorflowTrainingTask::chief() const {
  // @@protoc_insertion_point(field_get:flyteidl.plugins.DistributedTensorflowTrainingTask.chief)
  return chief_;
}
inline void DistributedTensorflowTrainingTask::set_chief(::google::protobuf::int32 value) {
  
  chief_ = value;
  // @@protoc_insertion_point(field_set:flyteidl.plugins.DistributedTensorflowTrainingTask.chief)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace plugins
}  // namespace flyteidl

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_flyteidl_2fplugins_2ftensorflow_2eproto
