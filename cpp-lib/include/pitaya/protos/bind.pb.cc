// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bind.proto

#include "bind.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protos {
class BindMsgDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BindMsg>
      _instance;
} _BindMsg_default_instance_;
}  // namespace protos
namespace protobuf_bind_2eproto {
static void InitDefaultsBindMsg() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protos::_BindMsg_default_instance_;
    new (ptr) ::protos::BindMsg();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protos::BindMsg::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_BindMsg =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsBindMsg}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_BindMsg.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protos::BindMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protos::BindMsg, uid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protos::BindMsg, fid_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::protos::BindMsg)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protos::_BindMsg_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "bind.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nbind.proto\022\006protos\"#\n\007BindMsg\022\013\n\003uid\030\001"
      " \001(\t\022\013\n\003fid\030\002 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 65);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "bind.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_bind_2eproto
namespace protos {

// ===================================================================

void BindMsg::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BindMsg::kUidFieldNumber;
const int BindMsg::kFidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BindMsg::BindMsg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_bind_2eproto::scc_info_BindMsg.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:protos.BindMsg)
}
BindMsg::BindMsg(const BindMsg& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uid().size() > 0) {
    uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uid_);
  }
  fid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.fid().size() > 0) {
    fid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fid_);
  }
  // @@protoc_insertion_point(copy_constructor:protos.BindMsg)
}

void BindMsg::SharedCtor() {
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

BindMsg::~BindMsg() {
  // @@protoc_insertion_point(destructor:protos.BindMsg)
  SharedDtor();
}

void BindMsg::SharedDtor() {
  uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void BindMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* BindMsg::descriptor() {
  ::protobuf_bind_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_bind_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BindMsg& BindMsg::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_bind_2eproto::scc_info_BindMsg.base);
  return *internal_default_instance();
}


void BindMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:protos.BindMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool BindMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protos.BindMsg)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string uid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uid().data(), static_cast<int>(this->uid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protos.BindMsg.uid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string fid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->fid().data(), static_cast<int>(this->fid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protos.BindMsg.fid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protos.BindMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protos.BindMsg)
  return false;
#undef DO_
}

void BindMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protos.BindMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string uid = 1;
  if (this->uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uid().data(), static_cast<int>(this->uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protos.BindMsg.uid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->uid(), output);
  }

  // string fid = 2;
  if (this->fid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fid().data(), static_cast<int>(this->fid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protos.BindMsg.fid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->fid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:protos.BindMsg)
}

::google::protobuf::uint8* BindMsg::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protos.BindMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string uid = 1;
  if (this->uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uid().data(), static_cast<int>(this->uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protos.BindMsg.uid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->uid(), target);
  }

  // string fid = 2;
  if (this->fid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fid().data(), static_cast<int>(this->fid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protos.BindMsg.fid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->fid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protos.BindMsg)
  return target;
}

size_t BindMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protos.BindMsg)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string uid = 1;
  if (this->uid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uid());
  }

  // string fid = 2;
  if (this->fid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->fid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BindMsg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protos.BindMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const BindMsg* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BindMsg>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protos.BindMsg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protos.BindMsg)
    MergeFrom(*source);
  }
}

void BindMsg::MergeFrom(const BindMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protos.BindMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.uid().size() > 0) {

    uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uid_);
  }
  if (from.fid().size() > 0) {

    fid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fid_);
  }
}

void BindMsg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protos.BindMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BindMsg::CopyFrom(const BindMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protos.BindMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BindMsg::IsInitialized() const {
  return true;
}

void BindMsg::Swap(BindMsg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BindMsg::InternalSwap(BindMsg* other) {
  using std::swap;
  uid_.Swap(&other->uid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  fid_.Swap(&other->fid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata BindMsg::GetMetadata() const {
  protobuf_bind_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_bind_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protos::BindMsg* Arena::CreateMaybeMessage< ::protos::BindMsg >(Arena* arena) {
  return Arena::CreateInternal< ::protos::BindMsg >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
