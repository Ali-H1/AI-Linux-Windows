// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_simulation_error.proto

#include "ssl_simulation_error.pb.h"

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
constexpr SimulatorError::SimulatorError(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : code_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , message_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct SimulatorErrorDefaultTypeInternal {
  constexpr SimulatorErrorDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~SimulatorErrorDefaultTypeInternal() {}
  union {
    SimulatorError _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT SimulatorErrorDefaultTypeInternal _SimulatorError_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ssl_5fsimulation_5ferror_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ssl_5fsimulation_5ferror_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ssl_5fsimulation_5ferror_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ssl_5fsimulation_5ferror_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::SimulatorError, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::SimulatorError, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::SimulatorError, code_),
  PROTOBUF_FIELD_OFFSET(::SimulatorError, message_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::SimulatorError)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_SimulatorError_default_instance_),
};

const char descriptor_table_protodef_ssl_5fsimulation_5ferror_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032ssl_simulation_error.proto\"/\n\016Simulato"
  "rError\022\014\n\004code\030\001 \001(\t\022\017\n\007message\030\002 \001(\tB8Z"
  "6github.com/RoboCup-SSL/ssl-simulation-p"
  "rotocol/pkg/sim"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ssl_5fsimulation_5ferror_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssl_5fsimulation_5ferror_2eproto = {
  false, false, 135, descriptor_table_protodef_ssl_5fsimulation_5ferror_2eproto, "ssl_simulation_error.proto", 
  &descriptor_table_ssl_5fsimulation_5ferror_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_ssl_5fsimulation_5ferror_2eproto::offsets,
  file_level_metadata_ssl_5fsimulation_5ferror_2eproto, file_level_enum_descriptors_ssl_5fsimulation_5ferror_2eproto, file_level_service_descriptors_ssl_5fsimulation_5ferror_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_ssl_5fsimulation_5ferror_2eproto_getter() {
  return &descriptor_table_ssl_5fsimulation_5ferror_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_ssl_5fsimulation_5ferror_2eproto(&descriptor_table_ssl_5fsimulation_5ferror_2eproto);

// ===================================================================

class SimulatorError::_Internal {
 public:
  using HasBits = decltype(std::declval<SimulatorError>()._has_bits_);
  static void set_has_code(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_message(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

SimulatorError::SimulatorError(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:SimulatorError)
}
SimulatorError::SimulatorError(const SimulatorError& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_code()) {
    code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_code(), 
      GetArenaForAllocation());
  }
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_message()) {
    message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_message(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:SimulatorError)
}

inline void SimulatorError::SharedCtor() {
code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

SimulatorError::~SimulatorError() {
  // @@protoc_insertion_point(destructor:SimulatorError)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void SimulatorError::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SimulatorError::ArenaDtor(void* object) {
  SimulatorError* _this = reinterpret_cast< SimulatorError* >(object);
  (void)_this;
}
void SimulatorError::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SimulatorError::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SimulatorError::Clear() {
// @@protoc_insertion_point(message_clear_start:SimulatorError)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      code_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      message_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SimulatorError::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "SimulatorError.code");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_message();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "SimulatorError.message");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SimulatorError::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SimulatorError)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string code = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "SimulatorError.code");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_code(), target);
  }

  // optional string message = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "SimulatorError.message");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SimulatorError)
  return target;
}

size_t SimulatorError::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SimulatorError)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string code = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_code());
    }

    // optional string message = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_message());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SimulatorError::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SimulatorError::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SimulatorError::GetClassData() const { return &_class_data_; }

void SimulatorError::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<SimulatorError *>(to)->MergeFrom(
      static_cast<const SimulatorError &>(from));
}


void SimulatorError::MergeFrom(const SimulatorError& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SimulatorError)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_code(from._internal_code());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_message(from._internal_message());
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SimulatorError::CopyFrom(const SimulatorError& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SimulatorError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimulatorError::IsInitialized() const {
  return true;
}

void SimulatorError::InternalSwap(SimulatorError* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &code_, GetArenaForAllocation(),
      &other->code_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &message_, GetArenaForAllocation(),
      &other->message_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SimulatorError::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ssl_5fsimulation_5ferror_2eproto_getter, &descriptor_table_ssl_5fsimulation_5ferror_2eproto_once,
      file_level_metadata_ssl_5fsimulation_5ferror_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::SimulatorError* Arena::CreateMaybeMessage< ::SimulatorError >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SimulatorError >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>