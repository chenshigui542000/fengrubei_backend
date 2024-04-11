// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grasp_event.proto

#include "grasp_event.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace gazebo {
namespace msgs {
class GraspEventDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GraspEvent> _instance;
} _GraspEvent_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_GraspEvent_grasp_5fevent_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_GraspEvent_default_instance_;
    new (ptr) ::gazebo::msgs::GraspEvent();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::GraspEvent::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GraspEvent_grasp_5fevent_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GraspEvent_grasp_5fevent_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grasp_5fevent_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grasp_5fevent_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grasp_5fevent_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grasp_5fevent_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GraspEvent, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GraspEvent, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GraspEvent, arm_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GraspEvent, object_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GraspEvent, attached_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::gazebo::msgs::GraspEvent)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_GraspEvent_default_instance_),
};

const char descriptor_table_protodef_grasp_5fevent_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021grasp_event.proto\022\013gazebo.msgs\";\n\nGras"
  "pEvent\022\013\n\003arm\030\001 \002(\t\022\016\n\006object\030\002 \002(\t\022\020\n\010a"
  "ttached\030\003 \002(\010"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grasp_5fevent_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_grasp_5fevent_2eproto_sccs[1] = {
  &scc_info_GraspEvent_grasp_5fevent_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grasp_5fevent_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grasp_5fevent_2eproto = {
  false, false, descriptor_table_protodef_grasp_5fevent_2eproto, "grasp_event.proto", 93,
  &descriptor_table_grasp_5fevent_2eproto_once, descriptor_table_grasp_5fevent_2eproto_sccs, descriptor_table_grasp_5fevent_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_grasp_5fevent_2eproto::offsets,
  file_level_metadata_grasp_5fevent_2eproto, 1, file_level_enum_descriptors_grasp_5fevent_2eproto, file_level_service_descriptors_grasp_5fevent_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_grasp_5fevent_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_grasp_5fevent_2eproto)), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void GraspEvent::InitAsDefaultInstance() {
}
class GraspEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<GraspEvent>()._has_bits_);
  static void set_has_arm(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_object(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_attached(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

GraspEvent::GraspEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:gazebo.msgs.GraspEvent)
}
GraspEvent::GraspEvent(const GraspEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  arm_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_arm()) {
    arm_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_arm(),
      GetArena());
  }
  object_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_object()) {
    object_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_object(),
      GetArena());
  }
  attached_ = from.attached_;
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.GraspEvent)
}

void GraspEvent::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GraspEvent_grasp_5fevent_2eproto.base);
  arm_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  object_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  attached_ = false;
}

GraspEvent::~GraspEvent() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.GraspEvent)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GraspEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  arm_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  object_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GraspEvent::ArenaDtor(void* object) {
  GraspEvent* _this = reinterpret_cast< GraspEvent* >(object);
  (void)_this;
}
void GraspEvent::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GraspEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GraspEvent& GraspEvent::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GraspEvent_grasp_5fevent_2eproto.base);
  return *internal_default_instance();
}


void GraspEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.GraspEvent)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      arm_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      object_.ClearNonDefaultToEmpty();
    }
  }
  attached_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GraspEvent::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string arm = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_arm();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.GraspEvent.arm");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string object = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_object();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.GraspEvent.object");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required bool attached = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_attached(&has_bits);
          attached_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GraspEvent::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.GraspEvent)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string arm = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_arm().data(), static_cast<int>(this->_internal_arm().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.GraspEvent.arm");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_arm(), target);
  }

  // required string object = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_object().data(), static_cast<int>(this->_internal_object().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.GraspEvent.object");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_object(), target);
  }

  // required bool attached = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_attached(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.GraspEvent)
  return target;
}

size_t GraspEvent::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.GraspEvent)
  size_t total_size = 0;

  if (_internal_has_arm()) {
    // required string arm = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_arm());
  }

  if (_internal_has_object()) {
    // required string object = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_object());
  }

  if (_internal_has_attached()) {
    // required bool attached = 3;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t GraspEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.GraspEvent)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string arm = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_arm());

    // required string object = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_object());

    // required bool attached = 3;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GraspEvent::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.GraspEvent)
  GOOGLE_DCHECK_NE(&from, this);
  const GraspEvent* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GraspEvent>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.GraspEvent)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.GraspEvent)
    MergeFrom(*source);
  }
}

void GraspEvent::MergeFrom(const GraspEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.GraspEvent)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_arm(from._internal_arm());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_object(from._internal_object());
    }
    if (cached_has_bits & 0x00000004u) {
      attached_ = from.attached_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void GraspEvent::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.GraspEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GraspEvent::CopyFrom(const GraspEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.GraspEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GraspEvent::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void GraspEvent::InternalSwap(GraspEvent* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  arm_.Swap(&other->arm_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  object_.Swap(&other->object_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(attached_, other->attached_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GraspEvent::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::GraspEvent* Arena::CreateMaybeMessage< ::gazebo::msgs::GraspEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::gazebo::msgs::GraspEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
