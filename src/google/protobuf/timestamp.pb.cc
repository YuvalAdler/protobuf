// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/timestamp.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/timestamp.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
::google::protobuf::internal::ExplicitlyConstructed<Timestamp> _Timestamp_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2ftimestamp_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2ftimestamp_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2ftimestamp_2eproto();
  static const ::google::protobuf::uint32 offsets[] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timestamp, seconds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timestamp, nanos_),
  };
  static const ::google::protobuf::internal::ReflectionSchema schemas[] = {
    { reinterpret_cast<const   ::google::protobuf::Message*>(&_Timestamp_default_instance_),
      offsets + 0,
      NULL,
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Timestamp, _internal_metadata_),
        -1,
      NULL,
      -1,
      sizeof(Timestamp),
    },
  };
  (void)offsets;  // suppress unused variable warning
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/timestamp.proto", schemas, factory,
      file_level_metadata, NULL, NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2ftimestamp_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2ftimestamp_2eproto() {
  _Timestamp_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Timestamp_default_instance_.DefaultConstruct();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto_once_);
void protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto_once_,
                 &protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto_impl);
}
void protobuf_AddDesc_google_2fprotobuf_2ftimestamp_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto();
  static const char descriptor[] = {
      "\n\037google/protobuf/timestamp.proto\022\017googl"
      "e.protobuf\"+\n\tTimestamp\022\017\n\007seconds\030\001 \001(\003"
      "\022\r\n\005nanos\030\002 \001(\005B~\n\023com.google.protobufB\016"
      "TimestampProtoP\001Z+github.com/golang/prot"
      "obuf/ptypes/timestamp\370\001\001\242\002\003GPB\252\002\036Google."
      "Protobuf.WellKnownTypesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 231);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/timestamp.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2ftimestamp_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fprotobuf_2ftimestamp_2eproto_once_);
void protobuf_AddDesc_google_2fprotobuf_2ftimestamp_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fprotobuf_2ftimestamp_2eproto_once_,
                 &protobuf_AddDesc_google_2fprotobuf_2ftimestamp_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2ftimestamp_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2ftimestamp_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2ftimestamp_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2ftimestamp_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Timestamp::kSecondsFieldNumber;
const int Timestamp::kNanosFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Timestamp::Timestamp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Timestamp)
}
Timestamp::Timestamp(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Timestamp)
}
Timestamp::Timestamp(const Timestamp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&seconds_, &from.seconds_,
    reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&seconds_) + sizeof(nanos_));
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Timestamp)
}

void Timestamp::SharedCtor() {
  ::memset(&seconds_, 0, reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&seconds_) + sizeof(nanos_));
  _cached_size_ = 0;
}

Timestamp::~Timestamp() {
  // @@protoc_insertion_point(destructor:google.protobuf.Timestamp)
  SharedDtor();
}

void Timestamp::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void Timestamp::ArenaDtor(void* object) {
  Timestamp* _this = reinterpret_cast< Timestamp* >(object);
  (void)_this;
}
void Timestamp::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Timestamp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Timestamp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const Timestamp& Timestamp::default_instance() {
  protobuf_InitDefaults_google_2fprotobuf_2ftimestamp_2eproto();
  return *internal_default_instance();
}

Timestamp* Timestamp::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Timestamp>(arena);
}

void Timestamp::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Timestamp)
  ::memset(&seconds_, 0, reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&seconds_) + sizeof(nanos_));
}

bool Timestamp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Timestamp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 seconds = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &seconds_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nanos = 2;
      case 2: {
        if (tag == 16) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nanos_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.Timestamp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Timestamp)
  return false;
#undef DO_
}

void Timestamp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Timestamp)
  // int64 seconds = 1;
  if (this->seconds() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->seconds(), output);
  }

  // int32 nanos = 2;
  if (this->nanos() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nanos(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Timestamp)
}

::google::protobuf::uint8* Timestamp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Timestamp)
  // int64 seconds = 1;
  if (this->seconds() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->seconds(), target);
  }

  // int32 nanos = 2;
  if (this->nanos() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nanos(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Timestamp)
  return target;
}

size_t Timestamp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Timestamp)
  size_t total_size = 0;

  // int64 seconds = 1;
  if (this->seconds() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->seconds());
  }

  // int32 nanos = 2;
  if (this->nanos() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nanos());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Timestamp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Timestamp)
  GOOGLE_DCHECK_NE(&from, this);
  const Timestamp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Timestamp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Timestamp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Timestamp)
    MergeFrom(*source);
  }
}

void Timestamp::MergeFrom(const Timestamp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Timestamp)
  GOOGLE_DCHECK(&from != this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.seconds() != 0) {
    set_seconds(from.seconds());
  }
  if (from.nanos() != 0) {
    set_nanos(from.nanos());
  }
}

void Timestamp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Timestamp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Timestamp::CopyFrom(const Timestamp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Timestamp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Timestamp::IsInitialized() const {
  return true;
}

void Timestamp::Swap(Timestamp* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Timestamp* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void Timestamp::UnsafeArenaSwap(Timestamp* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Timestamp::InternalSwap(Timestamp* other) {
  std::swap(seconds_, other->seconds_);
  std::swap(nanos_, other->nanos_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Timestamp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Timestamp

// int64 seconds = 1;
void Timestamp::clear_seconds() {
  seconds_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 Timestamp::seconds() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Timestamp.seconds)
  return seconds_;
}
void Timestamp::set_seconds(::google::protobuf::int64 value) {
  
  seconds_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Timestamp.seconds)
}

// int32 nanos = 2;
void Timestamp::clear_nanos() {
  nanos_ = 0;
}
::google::protobuf::int32 Timestamp::nanos() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Timestamp.nanos)
  return nanos_;
}
void Timestamp::set_nanos(::google::protobuf::int32 value) {
  
  nanos_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Timestamp.nanos)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
