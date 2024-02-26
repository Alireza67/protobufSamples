// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: check-oneof.proto

#include "check-oneof.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Bar::Bar(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.discription_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.payload_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BarDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BarDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BarDefaultTypeInternal() {}
  union {
    Bar _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BarDefaultTypeInternal _Bar_default_instance_;
PROTOBUF_CONSTEXPR Foo::Foo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.properties_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.item_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_._oneof_case_)*/{}} {}
struct FooDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FooDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FooDefaultTypeInternal() {}
  union {
    Foo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FooDefaultTypeInternal _Foo_default_instance_;
static ::_pb::Metadata file_level_metadata_check_2doneof_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_check_2doneof_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_check_2doneof_2eproto = nullptr;

const uint32_t TableStruct_check_2doneof_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Bar, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Bar, _impl_.discription_),
  PROTOBUF_FIELD_OFFSET(::Bar, _impl_.payload_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Foo, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::Foo, _impl_._oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::Foo, _impl_.properties_),
  PROTOBUF_FIELD_OFFSET(::Foo, _impl_.item_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Bar)},
  { 8, -1, -1, sizeof(::Foo)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Bar_default_instance_._instance,
  &::_Foo_default_instance_._instance,
};

const char descriptor_table_protodef_check_2doneof_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021check-oneof.proto\"+\n\003Bar\022\023\n\013discriptio"
  "n\030\001 \001(\t\022\017\n\007payload\030\002 \001(\014\"n\n\003Foo\022\r\n\003age\030\001"
  " \001(\005H\000\022\021\n\007is_male\030\002 \001(\010H\000\022\017\n\005power\030\003 \001(\001"
  "H\000\022\030\n\010innerBar\030\004 \001(\0132\004.BarH\000\022\022\n\nproperti"
  "es\030\005 \001(\014B\006\n\004itemb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_check_2doneof_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_check_2doneof_2eproto = {
    false, false, 184, descriptor_table_protodef_check_2doneof_2eproto,
    "check-oneof.proto",
    &descriptor_table_check_2doneof_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_check_2doneof_2eproto::offsets,
    file_level_metadata_check_2doneof_2eproto, file_level_enum_descriptors_check_2doneof_2eproto,
    file_level_service_descriptors_check_2doneof_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_check_2doneof_2eproto_getter() {
  return &descriptor_table_check_2doneof_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_check_2doneof_2eproto(&descriptor_table_check_2doneof_2eproto);

// ===================================================================

class Bar::_Internal {
 public:
};

Bar::Bar(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Bar)
}
Bar::Bar(const Bar& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Bar* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.discription_){}
    , decltype(_impl_.payload_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.discription_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.discription_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_discription().empty()) {
    _this->_impl_.discription_.Set(from._internal_discription(), 
      _this->GetArenaForAllocation());
  }
  _impl_.payload_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.payload_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_payload().empty()) {
    _this->_impl_.payload_.Set(from._internal_payload(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:Bar)
}

inline void Bar::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.discription_){}
    , decltype(_impl_.payload_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.discription_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.discription_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.payload_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.payload_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Bar::~Bar() {
  // @@protoc_insertion_point(destructor:Bar)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Bar::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.discription_.Destroy();
  _impl_.payload_.Destroy();
}

void Bar::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Bar::Clear() {
// @@protoc_insertion_point(message_clear_start:Bar)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.discription_.ClearToEmpty();
  _impl_.payload_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Bar::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string discription = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_discription();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Bar.discription"));
        } else
          goto handle_unusual;
        continue;
      // bytes payload = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_payload();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Bar::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Bar)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string discription = 1;
  if (!this->_internal_discription().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_discription().data(), static_cast<int>(this->_internal_discription().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Bar.discription");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_discription(), target);
  }

  // bytes payload = 2;
  if (!this->_internal_payload().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_payload(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Bar)
  return target;
}

size_t Bar::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Bar)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string discription = 1;
  if (!this->_internal_discription().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_discription());
  }

  // bytes payload = 2;
  if (!this->_internal_payload().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_payload());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Bar::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Bar::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Bar::GetClassData() const { return &_class_data_; }


void Bar::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Bar*>(&to_msg);
  auto& from = static_cast<const Bar&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Bar)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_discription().empty()) {
    _this->_internal_set_discription(from._internal_discription());
  }
  if (!from._internal_payload().empty()) {
    _this->_internal_set_payload(from._internal_payload());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Bar::CopyFrom(const Bar& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Bar)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bar::IsInitialized() const {
  return true;
}

void Bar::InternalSwap(Bar* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.discription_, lhs_arena,
      &other->_impl_.discription_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.payload_, lhs_arena,
      &other->_impl_.payload_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Bar::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_check_2doneof_2eproto_getter, &descriptor_table_check_2doneof_2eproto_once,
      file_level_metadata_check_2doneof_2eproto[0]);
}

// ===================================================================

class Foo::_Internal {
 public:
  static const ::Bar& innerbar(const Foo* msg);
};

const ::Bar&
Foo::_Internal::innerbar(const Foo* msg) {
  return *msg->_impl_.item_.innerbar_;
}
void Foo::set_allocated_innerbar(::Bar* innerbar) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_item();
  if (innerbar) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(innerbar);
    if (message_arena != submessage_arena) {
      innerbar = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, innerbar, submessage_arena);
    }
    set_has_innerbar();
    _impl_.item_.innerbar_ = innerbar;
  }
  // @@protoc_insertion_point(field_set_allocated:Foo.innerBar)
}
Foo::Foo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Foo)
}
Foo::Foo(const Foo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Foo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.properties_){}
    , decltype(_impl_.item_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.properties_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.properties_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_properties().empty()) {
    _this->_impl_.properties_.Set(from._internal_properties(), 
      _this->GetArenaForAllocation());
  }
  clear_has_item();
  switch (from.item_case()) {
    case kAge: {
      _this->_internal_set_age(from._internal_age());
      break;
    }
    case kIsMale: {
      _this->_internal_set_is_male(from._internal_is_male());
      break;
    }
    case kPower: {
      _this->_internal_set_power(from._internal_power());
      break;
    }
    case kInnerBar: {
      _this->_internal_mutable_innerbar()->::Bar::MergeFrom(
          from._internal_innerbar());
      break;
    }
    case ITEM_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:Foo)
}

inline void Foo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.properties_){}
    , decltype(_impl_.item_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}
  };
  _impl_.properties_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.properties_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  clear_has_item();
}

Foo::~Foo() {
  // @@protoc_insertion_point(destructor:Foo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Foo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.properties_.Destroy();
  if (has_item()) {
    clear_item();
  }
}

void Foo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Foo::clear_item() {
// @@protoc_insertion_point(one_of_clear_start:Foo)
  switch (item_case()) {
    case kAge: {
      // No need to clear
      break;
    }
    case kIsMale: {
      // No need to clear
      break;
    }
    case kPower: {
      // No need to clear
      break;
    }
    case kInnerBar: {
      if (GetArenaForAllocation() == nullptr) {
        delete _impl_.item_.innerbar_;
      }
      break;
    }
    case ITEM_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = ITEM_NOT_SET;
}


void Foo::Clear() {
// @@protoc_insertion_point(message_clear_start:Foo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.properties_.ClearToEmpty();
  clear_item();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Foo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 age = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _internal_set_age(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool is_male = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _internal_set_is_male(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // double power = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _internal_set_power(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // .Bar innerBar = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_innerbar(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes properties = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_properties();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Foo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Foo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 age = 1;
  if (_internal_has_age()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_age(), target);
  }

  // bool is_male = 2;
  if (_internal_has_is_male()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_is_male(), target);
  }

  // double power = 3;
  if (_internal_has_power()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_power(), target);
  }

  // .Bar innerBar = 4;
  if (_internal_has_innerbar()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::innerbar(this),
        _Internal::innerbar(this).GetCachedSize(), target, stream);
  }

  // bytes properties = 5;
  if (!this->_internal_properties().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_properties(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Foo)
  return target;
}

size_t Foo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Foo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes properties = 5;
  if (!this->_internal_properties().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_properties());
  }

  switch (item_case()) {
    // int32 age = 1;
    case kAge: {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_age());
      break;
    }
    // bool is_male = 2;
    case kIsMale: {
      total_size += 1 + 1;
      break;
    }
    // double power = 3;
    case kPower: {
      total_size += 1 + 8;
      break;
    }
    // .Bar innerBar = 4;
    case kInnerBar: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.item_.innerbar_);
      break;
    }
    case ITEM_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Foo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Foo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Foo::GetClassData() const { return &_class_data_; }


void Foo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Foo*>(&to_msg);
  auto& from = static_cast<const Foo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Foo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_properties().empty()) {
    _this->_internal_set_properties(from._internal_properties());
  }
  switch (from.item_case()) {
    case kAge: {
      _this->_internal_set_age(from._internal_age());
      break;
    }
    case kIsMale: {
      _this->_internal_set_is_male(from._internal_is_male());
      break;
    }
    case kPower: {
      _this->_internal_set_power(from._internal_power());
      break;
    }
    case kInnerBar: {
      _this->_internal_mutable_innerbar()->::Bar::MergeFrom(
          from._internal_innerbar());
      break;
    }
    case ITEM_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Foo::CopyFrom(const Foo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Foo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Foo::IsInitialized() const {
  return true;
}

void Foo::InternalSwap(Foo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.properties_, lhs_arena,
      &other->_impl_.properties_, rhs_arena
  );
  swap(_impl_.item_, other->_impl_.item_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata Foo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_check_2doneof_2eproto_getter, &descriptor_table_check_2doneof_2eproto_once,
      file_level_metadata_check_2doneof_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Bar*
Arena::CreateMaybeMessage< ::Bar >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Bar >(arena);
}
template<> PROTOBUF_NOINLINE ::Foo*
Arena::CreateMaybeMessage< ::Foo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Foo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>