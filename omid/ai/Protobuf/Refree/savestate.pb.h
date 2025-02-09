// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: savestate.proto

#ifndef PROTOBUF_INCLUDED_savestate_2eproto
#define PROTOBUF_INCLUDED_savestate_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "referee.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_savestate_2eproto 

namespace protobuf_savestate_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_savestate_2eproto
class SaveState;
class SaveStateDefaultTypeInternal;
extern SaveStateDefaultTypeInternal _SaveState_default_instance_;
class SaveState_CardInfo;
class SaveState_CardInfoDefaultTypeInternal;
extern SaveState_CardInfoDefaultTypeInternal _SaveState_CardInfo_default_instance_;
class SaveState_TimeoutInfo;
class SaveState_TimeoutInfoDefaultTypeInternal;
extern SaveState_TimeoutInfoDefaultTypeInternal _SaveState_TimeoutInfo_default_instance_;
namespace google {
namespace protobuf {
template<> ::SaveState* Arena::CreateMaybeMessage<::SaveState>(Arena*);
template<> ::SaveState_CardInfo* Arena::CreateMaybeMessage<::SaveState_CardInfo>(Arena*);
template<> ::SaveState_TimeoutInfo* Arena::CreateMaybeMessage<::SaveState_TimeoutInfo>(Arena*);
}  // namespace protobuf
}  // namespace google

enum SaveState_Team {
  SaveState_Team_TEAM_YELLOW = 0,
  SaveState_Team_TEAM_BLUE = 1
};
bool SaveState_Team_IsValid(int value);
const SaveState_Team SaveState_Team_Team_MIN = SaveState_Team_TEAM_YELLOW;
const SaveState_Team SaveState_Team_Team_MAX = SaveState_Team_TEAM_BLUE;
const int SaveState_Team_Team_ARRAYSIZE = SaveState_Team_Team_MAX + 1;

const ::google::protobuf::EnumDescriptor* SaveState_Team_descriptor();
inline const ::std::string& SaveState_Team_Name(SaveState_Team value) {
  return ::google::protobuf::internal::NameOfEnum(
    SaveState_Team_descriptor(), value);
}
inline bool SaveState_Team_Parse(
    const ::std::string& name, SaveState_Team* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SaveState_Team>(
    SaveState_Team_descriptor(), name, value);
}
enum SaveState_Card {
  SaveState_Card_CARD_YELLOW = 0,
  SaveState_Card_CARD_RED = 1
};
bool SaveState_Card_IsValid(int value);
const SaveState_Card SaveState_Card_Card_MIN = SaveState_Card_CARD_YELLOW;
const SaveState_Card SaveState_Card_Card_MAX = SaveState_Card_CARD_RED;
const int SaveState_Card_Card_ARRAYSIZE = SaveState_Card_Card_MAX + 1;

const ::google::protobuf::EnumDescriptor* SaveState_Card_descriptor();
inline const ::std::string& SaveState_Card_Name(SaveState_Card value) {
  return ::google::protobuf::internal::NameOfEnum(
    SaveState_Card_descriptor(), value);
}
inline bool SaveState_Card_Parse(
    const ::std::string& name, SaveState_Card* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SaveState_Card>(
    SaveState_Card_descriptor(), name, value);
}
// ===================================================================

class SaveState_CardInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SaveState.CardInfo) */ {
 public:
  SaveState_CardInfo();
  virtual ~SaveState_CardInfo();

  SaveState_CardInfo(const SaveState_CardInfo& from);

  inline SaveState_CardInfo& operator=(const SaveState_CardInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SaveState_CardInfo(SaveState_CardInfo&& from) noexcept
    : SaveState_CardInfo() {
    *this = ::std::move(from);
  }

  inline SaveState_CardInfo& operator=(SaveState_CardInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SaveState_CardInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SaveState_CardInfo* internal_default_instance() {
    return reinterpret_cast<const SaveState_CardInfo*>(
               &_SaveState_CardInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SaveState_CardInfo* other);
  friend void swap(SaveState_CardInfo& a, SaveState_CardInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SaveState_CardInfo* New() const final {
    return CreateMaybeMessage<SaveState_CardInfo>(NULL);
  }

  SaveState_CardInfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SaveState_CardInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SaveState_CardInfo& from);
  void MergeFrom(const SaveState_CardInfo& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SaveState_CardInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .SaveState.Team team = 1;
  bool has_team() const;
  void clear_team();
  static const int kTeamFieldNumber = 1;
  ::SaveState_Team team() const;
  void set_team(::SaveState_Team value);

  // required .SaveState.Card card = 2;
  bool has_card() const;
  void clear_card();
  static const int kCardFieldNumber = 2;
  ::SaveState_Card card() const;
  void set_card(::SaveState_Card value);

  // @@protoc_insertion_point(class_scope:SaveState.CardInfo)
 private:
  void set_has_team();
  void clear_has_team();
  void set_has_card();
  void clear_has_card();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  int team_;
  int card_;
  friend struct ::protobuf_savestate_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SaveState_TimeoutInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SaveState.TimeoutInfo) */ {
 public:
  SaveState_TimeoutInfo();
  virtual ~SaveState_TimeoutInfo();

  SaveState_TimeoutInfo(const SaveState_TimeoutInfo& from);

  inline SaveState_TimeoutInfo& operator=(const SaveState_TimeoutInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SaveState_TimeoutInfo(SaveState_TimeoutInfo&& from) noexcept
    : SaveState_TimeoutInfo() {
    *this = ::std::move(from);
  }

  inline SaveState_TimeoutInfo& operator=(SaveState_TimeoutInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SaveState_TimeoutInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SaveState_TimeoutInfo* internal_default_instance() {
    return reinterpret_cast<const SaveState_TimeoutInfo*>(
               &_SaveState_TimeoutInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SaveState_TimeoutInfo* other);
  friend void swap(SaveState_TimeoutInfo& a, SaveState_TimeoutInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SaveState_TimeoutInfo* New() const final {
    return CreateMaybeMessage<SaveState_TimeoutInfo>(NULL);
  }

  SaveState_TimeoutInfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SaveState_TimeoutInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SaveState_TimeoutInfo& from);
  void MergeFrom(const SaveState_TimeoutInfo& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SaveState_TimeoutInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .SaveState.Team team = 1;
  bool has_team() const;
  void clear_team();
  static const int kTeamFieldNumber = 1;
  ::SaveState_Team team() const;
  void set_team(::SaveState_Team value);

  // required uint32 left_before = 2;
  bool has_left_before() const;
  void clear_left_before();
  static const int kLeftBeforeFieldNumber = 2;
  ::google::protobuf::uint32 left_before() const;
  void set_left_before(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SaveState.TimeoutInfo)
 private:
  void set_has_team();
  void clear_has_team();
  void set_has_left_before();
  void clear_has_left_before();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  int team_;
  ::google::protobuf::uint32 left_before_;
  friend struct ::protobuf_savestate_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SaveState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SaveState) */ {
 public:
  SaveState();
  virtual ~SaveState();

  SaveState(const SaveState& from);

  inline SaveState& operator=(const SaveState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SaveState(SaveState&& from) noexcept
    : SaveState() {
    *this = ::std::move(from);
  }

  inline SaveState& operator=(SaveState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SaveState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SaveState* internal_default_instance() {
    return reinterpret_cast<const SaveState*>(
               &_SaveState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(SaveState* other);
  friend void swap(SaveState& a, SaveState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SaveState* New() const final {
    return CreateMaybeMessage<SaveState>(NULL);
  }

  SaveState* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SaveState>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SaveState& from);
  void MergeFrom(const SaveState& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SaveState* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef SaveState_CardInfo CardInfo;
  typedef SaveState_TimeoutInfo TimeoutInfo;

  typedef SaveState_Team Team;
  static const Team TEAM_YELLOW =
    SaveState_Team_TEAM_YELLOW;
  static const Team TEAM_BLUE =
    SaveState_Team_TEAM_BLUE;
  static inline bool Team_IsValid(int value) {
    return SaveState_Team_IsValid(value);
  }
  static const Team Team_MIN =
    SaveState_Team_Team_MIN;
  static const Team Team_MAX =
    SaveState_Team_Team_MAX;
  static const int Team_ARRAYSIZE =
    SaveState_Team_Team_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Team_descriptor() {
    return SaveState_Team_descriptor();
  }
  static inline const ::std::string& Team_Name(Team value) {
    return SaveState_Team_Name(value);
  }
  static inline bool Team_Parse(const ::std::string& name,
      Team* value) {
    return SaveState_Team_Parse(name, value);
  }

  typedef SaveState_Card Card;
  static const Card CARD_YELLOW =
    SaveState_Card_CARD_YELLOW;
  static const Card CARD_RED =
    SaveState_Card_CARD_RED;
  static inline bool Card_IsValid(int value) {
    return SaveState_Card_IsValid(value);
  }
  static const Card Card_MIN =
    SaveState_Card_Card_MIN;
  static const Card Card_MAX =
    SaveState_Card_Card_MAX;
  static const int Card_ARRAYSIZE =
    SaveState_Card_Card_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Card_descriptor() {
    return SaveState_Card_descriptor();
  }
  static inline const ::std::string& Card_Name(Card value) {
    return SaveState_Card_Name(value);
  }
  static inline bool Card_Parse(const ::std::string& name,
      Card* value) {
    return SaveState_Card_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .SSL_Referee referee = 1;
  bool has_referee() const;
  void clear_referee();
  static const int kRefereeFieldNumber = 1;
  private:
  const ::SSL_Referee& _internal_referee() const;
  public:
  const ::SSL_Referee& referee() const;
  ::SSL_Referee* release_referee();
  ::SSL_Referee* mutable_referee();
  void set_allocated_referee(::SSL_Referee* referee);

  // optional .SaveState.CardInfo last_card = 5;
  bool has_last_card() const;
  void clear_last_card();
  static const int kLastCardFieldNumber = 5;
  private:
  const ::SaveState_CardInfo& _internal_last_card() const;
  public:
  const ::SaveState_CardInfo& last_card() const;
  ::SaveState_CardInfo* release_last_card();
  ::SaveState_CardInfo* mutable_last_card();
  void set_allocated_last_card(::SaveState_CardInfo* last_card);

  // optional .SaveState.TimeoutInfo timeout = 6;
  bool has_timeout() const;
  void clear_timeout();
  static const int kTimeoutFieldNumber = 6;
  private:
  const ::SaveState_TimeoutInfo& _internal_timeout() const;
  public:
  const ::SaveState_TimeoutInfo& timeout() const;
  ::SaveState_TimeoutInfo* release_timeout();
  ::SaveState_TimeoutInfo* mutable_timeout();
  void set_allocated_timeout(::SaveState_TimeoutInfo* timeout);

  // optional .SaveState.TimeoutInfo last_timeout = 7;
  bool has_last_timeout() const;
  void clear_last_timeout();
  static const int kLastTimeoutFieldNumber = 7;
  private:
  const ::SaveState_TimeoutInfo& _internal_last_timeout() const;
  public:
  const ::SaveState_TimeoutInfo& last_timeout() const;
  ::SaveState_TimeoutInfo* release_last_timeout();
  ::SaveState_TimeoutInfo* mutable_last_timeout();
  void set_allocated_last_timeout(::SaveState_TimeoutInfo* last_timeout);

  // required uint32 yellow_penalty_goals = 2;
  bool has_yellow_penalty_goals() const;
  void clear_yellow_penalty_goals();
  static const int kYellowPenaltyGoalsFieldNumber = 2;
  ::google::protobuf::uint32 yellow_penalty_goals() const;
  void set_yellow_penalty_goals(::google::protobuf::uint32 value);

  // required uint32 blue_penalty_goals = 3;
  bool has_blue_penalty_goals() const;
  void clear_blue_penalty_goals();
  static const int kBluePenaltyGoalsFieldNumber = 3;
  ::google::protobuf::uint32 blue_penalty_goals() const;
  void set_blue_penalty_goals(::google::protobuf::uint32 value);

  // required uint64 time_taken = 4;
  bool has_time_taken() const;
  void clear_time_taken();
  static const int kTimeTakenFieldNumber = 4;
  ::google::protobuf::uint64 time_taken() const;
  void set_time_taken(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SaveState)
 private:
  void set_has_referee();
  void clear_has_referee();
  void set_has_yellow_penalty_goals();
  void clear_has_yellow_penalty_goals();
  void set_has_blue_penalty_goals();
  void clear_has_blue_penalty_goals();
  void set_has_time_taken();
  void clear_has_time_taken();
  void set_has_last_card();
  void clear_has_last_card();
  void set_has_timeout();
  void clear_has_timeout();
  void set_has_last_timeout();
  void clear_has_last_timeout();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::SSL_Referee* referee_;
  ::SaveState_CardInfo* last_card_;
  ::SaveState_TimeoutInfo* timeout_;
  ::SaveState_TimeoutInfo* last_timeout_;
  ::google::protobuf::uint32 yellow_penalty_goals_;
  ::google::protobuf::uint32 blue_penalty_goals_;
  ::google::protobuf::uint64 time_taken_;
  friend struct ::protobuf_savestate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SaveState_CardInfo

// required .SaveState.Team team = 1;
inline bool SaveState_CardInfo::has_team() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SaveState_CardInfo::set_has_team() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SaveState_CardInfo::clear_has_team() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SaveState_CardInfo::clear_team() {
  team_ = 0;
  clear_has_team();
}
inline ::SaveState_Team SaveState_CardInfo::team() const {
  // @@protoc_insertion_point(field_get:SaveState.CardInfo.team)
  return static_cast< ::SaveState_Team >(team_);
}
inline void SaveState_CardInfo::set_team(::SaveState_Team value) {
  assert(::SaveState_Team_IsValid(value));
  set_has_team();
  team_ = value;
  // @@protoc_insertion_point(field_set:SaveState.CardInfo.team)
}

// required .SaveState.Card card = 2;
inline bool SaveState_CardInfo::has_card() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SaveState_CardInfo::set_has_card() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SaveState_CardInfo::clear_has_card() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SaveState_CardInfo::clear_card() {
  card_ = 0;
  clear_has_card();
}
inline ::SaveState_Card SaveState_CardInfo::card() const {
  // @@protoc_insertion_point(field_get:SaveState.CardInfo.card)
  return static_cast< ::SaveState_Card >(card_);
}
inline void SaveState_CardInfo::set_card(::SaveState_Card value) {
  assert(::SaveState_Card_IsValid(value));
  set_has_card();
  card_ = value;
  // @@protoc_insertion_point(field_set:SaveState.CardInfo.card)
}

// -------------------------------------------------------------------

// SaveState_TimeoutInfo

// required .SaveState.Team team = 1;
inline bool SaveState_TimeoutInfo::has_team() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SaveState_TimeoutInfo::set_has_team() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SaveState_TimeoutInfo::clear_has_team() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SaveState_TimeoutInfo::clear_team() {
  team_ = 0;
  clear_has_team();
}
inline ::SaveState_Team SaveState_TimeoutInfo::team() const {
  // @@protoc_insertion_point(field_get:SaveState.TimeoutInfo.team)
  return static_cast< ::SaveState_Team >(team_);
}
inline void SaveState_TimeoutInfo::set_team(::SaveState_Team value) {
  assert(::SaveState_Team_IsValid(value));
  set_has_team();
  team_ = value;
  // @@protoc_insertion_point(field_set:SaveState.TimeoutInfo.team)
}

// required uint32 left_before = 2;
inline bool SaveState_TimeoutInfo::has_left_before() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SaveState_TimeoutInfo::set_has_left_before() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SaveState_TimeoutInfo::clear_has_left_before() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SaveState_TimeoutInfo::clear_left_before() {
  left_before_ = 0u;
  clear_has_left_before();
}
inline ::google::protobuf::uint32 SaveState_TimeoutInfo::left_before() const {
  // @@protoc_insertion_point(field_get:SaveState.TimeoutInfo.left_before)
  return left_before_;
}
inline void SaveState_TimeoutInfo::set_left_before(::google::protobuf::uint32 value) {
  set_has_left_before();
  left_before_ = value;
  // @@protoc_insertion_point(field_set:SaveState.TimeoutInfo.left_before)
}

// -------------------------------------------------------------------

// SaveState

// required .SSL_Referee referee = 1;
inline bool SaveState::has_referee() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SaveState::set_has_referee() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SaveState::clear_has_referee() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::SSL_Referee& SaveState::_internal_referee() const {
  return *referee_;
}
inline const ::SSL_Referee& SaveState::referee() const {
  const ::SSL_Referee* p = referee_;
  // @@protoc_insertion_point(field_get:SaveState.referee)
  return p != NULL ? *p : *reinterpret_cast<const ::SSL_Referee*>(
      &::_SSL_Referee_default_instance_);
}
inline ::SSL_Referee* SaveState::release_referee() {
  // @@protoc_insertion_point(field_release:SaveState.referee)
  clear_has_referee();
  ::SSL_Referee* temp = referee_;
  referee_ = NULL;
  return temp;
}
inline ::SSL_Referee* SaveState::mutable_referee() {
  set_has_referee();
  if (referee_ == NULL) {
    auto* p = CreateMaybeMessage<::SSL_Referee>(GetArenaNoVirtual());
    referee_ = p;
  }
  // @@protoc_insertion_point(field_mutable:SaveState.referee)
  return referee_;
}
inline void SaveState::set_allocated_referee(::SSL_Referee* referee) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(referee_);
  }
  if (referee) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      referee = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, referee, submessage_arena);
    }
    set_has_referee();
  } else {
    clear_has_referee();
  }
  referee_ = referee;
  // @@protoc_insertion_point(field_set_allocated:SaveState.referee)
}

// required uint32 yellow_penalty_goals = 2;
inline bool SaveState::has_yellow_penalty_goals() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SaveState::set_has_yellow_penalty_goals() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SaveState::clear_has_yellow_penalty_goals() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SaveState::clear_yellow_penalty_goals() {
  yellow_penalty_goals_ = 0u;
  clear_has_yellow_penalty_goals();
}
inline ::google::protobuf::uint32 SaveState::yellow_penalty_goals() const {
  // @@protoc_insertion_point(field_get:SaveState.yellow_penalty_goals)
  return yellow_penalty_goals_;
}
inline void SaveState::set_yellow_penalty_goals(::google::protobuf::uint32 value) {
  set_has_yellow_penalty_goals();
  yellow_penalty_goals_ = value;
  // @@protoc_insertion_point(field_set:SaveState.yellow_penalty_goals)
}

// required uint32 blue_penalty_goals = 3;
inline bool SaveState::has_blue_penalty_goals() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SaveState::set_has_blue_penalty_goals() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SaveState::clear_has_blue_penalty_goals() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SaveState::clear_blue_penalty_goals() {
  blue_penalty_goals_ = 0u;
  clear_has_blue_penalty_goals();
}
inline ::google::protobuf::uint32 SaveState::blue_penalty_goals() const {
  // @@protoc_insertion_point(field_get:SaveState.blue_penalty_goals)
  return blue_penalty_goals_;
}
inline void SaveState::set_blue_penalty_goals(::google::protobuf::uint32 value) {
  set_has_blue_penalty_goals();
  blue_penalty_goals_ = value;
  // @@protoc_insertion_point(field_set:SaveState.blue_penalty_goals)
}

// required uint64 time_taken = 4;
inline bool SaveState::has_time_taken() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SaveState::set_has_time_taken() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SaveState::clear_has_time_taken() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SaveState::clear_time_taken() {
  time_taken_ = GOOGLE_ULONGLONG(0);
  clear_has_time_taken();
}
inline ::google::protobuf::uint64 SaveState::time_taken() const {
  // @@protoc_insertion_point(field_get:SaveState.time_taken)
  return time_taken_;
}
inline void SaveState::set_time_taken(::google::protobuf::uint64 value) {
  set_has_time_taken();
  time_taken_ = value;
  // @@protoc_insertion_point(field_set:SaveState.time_taken)
}

// optional .SaveState.CardInfo last_card = 5;
inline bool SaveState::has_last_card() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SaveState::set_has_last_card() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SaveState::clear_has_last_card() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SaveState::clear_last_card() {
  if (last_card_ != NULL) last_card_->Clear();
  clear_has_last_card();
}
inline const ::SaveState_CardInfo& SaveState::_internal_last_card() const {
  return *last_card_;
}
inline const ::SaveState_CardInfo& SaveState::last_card() const {
  const ::SaveState_CardInfo* p = last_card_;
  // @@protoc_insertion_point(field_get:SaveState.last_card)
  return p != NULL ? *p : *reinterpret_cast<const ::SaveState_CardInfo*>(
      &::_SaveState_CardInfo_default_instance_);
}
inline ::SaveState_CardInfo* SaveState::release_last_card() {
  // @@protoc_insertion_point(field_release:SaveState.last_card)
  clear_has_last_card();
  ::SaveState_CardInfo* temp = last_card_;
  last_card_ = NULL;
  return temp;
}
inline ::SaveState_CardInfo* SaveState::mutable_last_card() {
  set_has_last_card();
  if (last_card_ == NULL) {
    auto* p = CreateMaybeMessage<::SaveState_CardInfo>(GetArenaNoVirtual());
    last_card_ = p;
  }
  // @@protoc_insertion_point(field_mutable:SaveState.last_card)
  return last_card_;
}
inline void SaveState::set_allocated_last_card(::SaveState_CardInfo* last_card) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete last_card_;
  }
  if (last_card) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      last_card = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, last_card, submessage_arena);
    }
    set_has_last_card();
  } else {
    clear_has_last_card();
  }
  last_card_ = last_card;
  // @@protoc_insertion_point(field_set_allocated:SaveState.last_card)
}

// optional .SaveState.TimeoutInfo timeout = 6;
inline bool SaveState::has_timeout() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SaveState::set_has_timeout() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SaveState::clear_has_timeout() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SaveState::clear_timeout() {
  if (timeout_ != NULL) timeout_->Clear();
  clear_has_timeout();
}
inline const ::SaveState_TimeoutInfo& SaveState::_internal_timeout() const {
  return *timeout_;
}
inline const ::SaveState_TimeoutInfo& SaveState::timeout() const {
  const ::SaveState_TimeoutInfo* p = timeout_;
  // @@protoc_insertion_point(field_get:SaveState.timeout)
  return p != NULL ? *p : *reinterpret_cast<const ::SaveState_TimeoutInfo*>(
      &::_SaveState_TimeoutInfo_default_instance_);
}
inline ::SaveState_TimeoutInfo* SaveState::release_timeout() {
  // @@protoc_insertion_point(field_release:SaveState.timeout)
  clear_has_timeout();
  ::SaveState_TimeoutInfo* temp = timeout_;
  timeout_ = NULL;
  return temp;
}
inline ::SaveState_TimeoutInfo* SaveState::mutable_timeout() {
  set_has_timeout();
  if (timeout_ == NULL) {
    auto* p = CreateMaybeMessage<::SaveState_TimeoutInfo>(GetArenaNoVirtual());
    timeout_ = p;
  }
  // @@protoc_insertion_point(field_mutable:SaveState.timeout)
  return timeout_;
}
inline void SaveState::set_allocated_timeout(::SaveState_TimeoutInfo* timeout) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete timeout_;
  }
  if (timeout) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      timeout = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, timeout, submessage_arena);
    }
    set_has_timeout();
  } else {
    clear_has_timeout();
  }
  timeout_ = timeout;
  // @@protoc_insertion_point(field_set_allocated:SaveState.timeout)
}

// optional .SaveState.TimeoutInfo last_timeout = 7;
inline bool SaveState::has_last_timeout() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SaveState::set_has_last_timeout() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SaveState::clear_has_last_timeout() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SaveState::clear_last_timeout() {
  if (last_timeout_ != NULL) last_timeout_->Clear();
  clear_has_last_timeout();
}
inline const ::SaveState_TimeoutInfo& SaveState::_internal_last_timeout() const {
  return *last_timeout_;
}
inline const ::SaveState_TimeoutInfo& SaveState::last_timeout() const {
  const ::SaveState_TimeoutInfo* p = last_timeout_;
  // @@protoc_insertion_point(field_get:SaveState.last_timeout)
  return p != NULL ? *p : *reinterpret_cast<const ::SaveState_TimeoutInfo*>(
      &::_SaveState_TimeoutInfo_default_instance_);
}
inline ::SaveState_TimeoutInfo* SaveState::release_last_timeout() {
  // @@protoc_insertion_point(field_release:SaveState.last_timeout)
  clear_has_last_timeout();
  ::SaveState_TimeoutInfo* temp = last_timeout_;
  last_timeout_ = NULL;
  return temp;
}
inline ::SaveState_TimeoutInfo* SaveState::mutable_last_timeout() {
  set_has_last_timeout();
  if (last_timeout_ == NULL) {
    auto* p = CreateMaybeMessage<::SaveState_TimeoutInfo>(GetArenaNoVirtual());
    last_timeout_ = p;
  }
  // @@protoc_insertion_point(field_mutable:SaveState.last_timeout)
  return last_timeout_;
}
inline void SaveState::set_allocated_last_timeout(::SaveState_TimeoutInfo* last_timeout) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete last_timeout_;
  }
  if (last_timeout) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      last_timeout = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, last_timeout, submessage_arena);
    }
    set_has_last_timeout();
  } else {
    clear_has_last_timeout();
  }
  last_timeout_ = last_timeout;
  // @@protoc_insertion_point(field_set_allocated:SaveState.last_timeout)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::SaveState_Team> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SaveState_Team>() {
  return ::SaveState_Team_descriptor();
}
template <> struct is_proto_enum< ::SaveState_Card> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SaveState_Card>() {
  return ::SaveState_Card_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_savestate_2eproto
