// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: doc.proto

#include "doc.pb.h"

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
class DocDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Doc>
      _instance;
} _Doc_default_instance_;
}  // namespace protos
namespace protobuf_doc_2eproto {
static void InitDefaultsDoc() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protos::_Doc_default_instance_;
    new (ptr) ::protos::Doc();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protos::Doc::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Doc =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsDoc}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Doc.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protos::Doc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protos::Doc, doc_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::protos::Doc)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protos::_Doc_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "doc.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\tdoc.proto\022\006protos\"\022\n\003Doc\022\013\n\003doc\030\001 \001(\tb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 47);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "doc.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_doc_2eproto
namespace protos {

// ===================================================================

void Doc::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Doc::kDocFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Doc::Doc()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_doc_2eproto::scc_info_Doc.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:protos.Doc)
}
Doc::Doc(const Doc& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  doc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.doc().size() > 0) {
    doc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.doc_);
  }
  // @@protoc_insertion_point(copy_constructor:protos.Doc)
}

void Doc::SharedCtor() {
  doc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Doc::~Doc() {
  // @@protoc_insertion_point(destructor:protos.Doc)
  SharedDtor();
}

void Doc::SharedDtor() {
  doc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Doc::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Doc::descriptor() {
  ::protobuf_doc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_doc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Doc& Doc::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_doc_2eproto::scc_info_Doc.base);
  return *internal_default_instance();
}


void Doc::Clear() {
// @@protoc_insertion_point(message_clear_start:protos.Doc)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  doc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Doc::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protos.Doc)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string doc = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_doc()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->doc().data(), static_cast<int>(this->doc().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protos.Doc.doc"));
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
  // @@protoc_insertion_point(parse_success:protos.Doc)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protos.Doc)
  return false;
#undef DO_
}

void Doc::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protos.Doc)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string doc = 1;
  if (this->doc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->doc().data(), static_cast<int>(this->doc().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protos.Doc.doc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->doc(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:protos.Doc)
}

::google::protobuf::uint8* Doc::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protos.Doc)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string doc = 1;
  if (this->doc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->doc().data(), static_cast<int>(this->doc().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protos.Doc.doc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->doc(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protos.Doc)
  return target;
}

size_t Doc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protos.Doc)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string doc = 1;
  if (this->doc().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->doc());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Doc::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protos.Doc)
  GOOGLE_DCHECK_NE(&from, this);
  const Doc* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Doc>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protos.Doc)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protos.Doc)
    MergeFrom(*source);
  }
}

void Doc::MergeFrom(const Doc& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protos.Doc)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.doc().size() > 0) {

    doc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.doc_);
  }
}

void Doc::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protos.Doc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Doc::CopyFrom(const Doc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protos.Doc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Doc::IsInitialized() const {
  return true;
}

void Doc::Swap(Doc* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Doc::InternalSwap(Doc* other) {
  using std::swap;
  doc_.Swap(&other->doc_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Doc::GetMetadata() const {
  protobuf_doc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_doc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protos::Doc* Arena::CreateMaybeMessage< ::protos::Doc >(Arena* arena) {
  return Arena::CreateInternal< ::protos::Doc >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)