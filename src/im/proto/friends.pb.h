// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friends.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_friends_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_friends_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "user.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_friends_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_friends_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_friends_2eproto;
namespace im {
namespace proto {
class Friends;
struct FriendsDefaultTypeInternal;
extern FriendsDefaultTypeInternal _Friends_default_instance_;
}  // namespace proto
}  // namespace im
PROTOBUF_NAMESPACE_OPEN
template<> ::im::proto::Friends* Arena::CreateMaybeMessage<::im::proto::Friends>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace im {
namespace proto {

// ===================================================================

class Friends final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:im.proto.Friends) */ {
 public:
  inline Friends() : Friends(nullptr) {}
  ~Friends() override;
  explicit PROTOBUF_CONSTEXPR Friends(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Friends(const Friends& from);
  Friends(Friends&& from) noexcept
    : Friends() {
    *this = ::std::move(from);
  }

  inline Friends& operator=(const Friends& from) {
    CopyFrom(from);
    return *this;
  }
  inline Friends& operator=(Friends&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Friends& default_instance() {
    return *internal_default_instance();
  }
  static inline const Friends* internal_default_instance() {
    return reinterpret_cast<const Friends*>(
               &_Friends_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Friends& a, Friends& b) {
    a.Swap(&b);
  }
  inline void Swap(Friends* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Friends* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Friends* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Friends>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Friends& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Friends& from) {
    Friends::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Friends* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "im.proto.Friends";
  }
  protected:
  explicit Friends(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsersFieldNumber = 1,
  };
  // repeated .im.proto.User users = 1;
  int users_size() const;
  private:
  int _internal_users_size() const;
  public:
  void clear_users();
  ::im::proto::User* mutable_users(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::im::proto::User >*
      mutable_users();
  private:
  const ::im::proto::User& _internal_users(int index) const;
  ::im::proto::User* _internal_add_users();
  public:
  const ::im::proto::User& users(int index) const;
  ::im::proto::User* add_users();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::im::proto::User >&
      users() const;

  // @@protoc_insertion_point(class_scope:im.proto.Friends)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::im::proto::User > users_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_friends_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Friends

// repeated .im.proto.User users = 1;
inline int Friends::_internal_users_size() const {
  return _impl_.users_.size();
}
inline int Friends::users_size() const {
  return _internal_users_size();
}
inline ::im::proto::User* Friends::mutable_users(int index) {
  // @@protoc_insertion_point(field_mutable:im.proto.Friends.users)
  return _impl_.users_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::im::proto::User >*
Friends::mutable_users() {
  // @@protoc_insertion_point(field_mutable_list:im.proto.Friends.users)
  return &_impl_.users_;
}
inline const ::im::proto::User& Friends::_internal_users(int index) const {
  return _impl_.users_.Get(index);
}
inline const ::im::proto::User& Friends::users(int index) const {
  // @@protoc_insertion_point(field_get:im.proto.Friends.users)
  return _internal_users(index);
}
inline ::im::proto::User* Friends::_internal_add_users() {
  return _impl_.users_.Add();
}
inline ::im::proto::User* Friends::add_users() {
  ::im::proto::User* _add = _internal_add_users();
  // @@protoc_insertion_point(field_add:im.proto.Friends.users)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::im::proto::User >&
Friends::users() const {
  // @@protoc_insertion_point(field_list:im.proto.Friends.users)
  return _impl_.users_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace im

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_friends_2eproto
