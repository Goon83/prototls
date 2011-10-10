// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "my_protocol.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace my_protocol {

namespace {

const ::google::protobuf::Descriptor* Hello_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Hello_reflection_ = NULL;
const ::google::protobuf::Descriptor* ServerMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServerMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* ClientMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClientMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_my_5fprotocol_2eproto() {
  protobuf_AddDesc_my_5fprotocol_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "my_protocol.proto");
  GOOGLE_CHECK(file != NULL);
  Hello_descriptor_ = file->message_type(0);
  static const int Hello_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, greeting_),
  };
  Hello_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Hello_descriptor_,
      Hello::default_instance_,
      Hello_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Hello));
  ServerMessage_descriptor_ = file->message_type(1);
  static const int ServerMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerMessage, hello_),
  };
  ServerMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ServerMessage_descriptor_,
      ServerMessage::default_instance_,
      ServerMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ServerMessage));
  ClientMessage_descriptor_ = file->message_type(2);
  static const int ClientMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientMessage, hello_),
  };
  ClientMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClientMessage_descriptor_,
      ClientMessage::default_instance_,
      ClientMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClientMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_my_5fprotocol_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Hello_descriptor_, &Hello::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ServerMessage_descriptor_, &ServerMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClientMessage_descriptor_, &ClientMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_my_5fprotocol_2eproto() {
  delete Hello::default_instance_;
  delete Hello_reflection_;
  delete ServerMessage::default_instance_;
  delete ServerMessage_reflection_;
  delete ClientMessage::default_instance_;
  delete ClientMessage_reflection_;
}

void protobuf_AddDesc_my_5fprotocol_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021my_protocol.proto\022\013my_protocol\"\031\n\005Hell"
    "o\022\020\n\010greeting\030\001 \002(\t\"2\n\rServerMessage\022!\n\005"
    "hello\030\001 \001(\0132\022.my_protocol.Hello\"2\n\rClien"
    "tMessage\022!\n\005hello\030\001 \001(\0132\022.my_protocol.He"
    "llo", 163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "my_protocol.proto", &protobuf_RegisterTypes);
  Hello::default_instance_ = new Hello();
  ServerMessage::default_instance_ = new ServerMessage();
  ClientMessage::default_instance_ = new ClientMessage();
  Hello::default_instance_->InitAsDefaultInstance();
  ServerMessage::default_instance_->InitAsDefaultInstance();
  ClientMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_my_5fprotocol_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_my_5fprotocol_2eproto {
  StaticDescriptorInitializer_my_5fprotocol_2eproto() {
    protobuf_AddDesc_my_5fprotocol_2eproto();
  }
} static_descriptor_initializer_my_5fprotocol_2eproto_;


// ===================================================================

const ::std::string Hello::_default_greeting_;
#ifndef _MSC_VER
const int Hello::kGreetingFieldNumber;
#endif  // !_MSC_VER

Hello::Hello()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Hello::InitAsDefaultInstance() {
}

Hello::Hello(const Hello& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Hello::SharedCtor() {
  _cached_size_ = 0;
  greeting_ = const_cast< ::std::string*>(&_default_greeting_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Hello::~Hello() {
  SharedDtor();
}

void Hello::SharedDtor() {
  if (greeting_ != &_default_greeting_) {
    delete greeting_;
  }
  if (this != default_instance_) {
  }
}

void Hello::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Hello::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Hello_descriptor_;
}

const Hello& Hello::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_my_5fprotocol_2eproto();  return *default_instance_;
}

Hello* Hello::default_instance_ = NULL;

Hello* Hello::New() const {
  return new Hello;
}

void Hello::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (greeting_ != &_default_greeting_) {
        greeting_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Hello::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string greeting = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_greeting()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->greeting().data(), this->greeting().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Hello::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string greeting = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->greeting().data(), this->greeting().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->greeting(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Hello::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string greeting = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->greeting().data(), this->greeting().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->greeting(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Hello::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string greeting = 1;
    if (has_greeting()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->greeting());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Hello::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Hello* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Hello*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Hello::MergeFrom(const Hello& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_greeting(from.greeting());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Hello::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hello::CopyFrom(const Hello& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hello::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void Hello::Swap(Hello* other) {
  if (other != this) {
    std::swap(greeting_, other->greeting_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Hello::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Hello_descriptor_;
  metadata.reflection = Hello_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ServerMessage::kHelloFieldNumber;
#endif  // !_MSC_VER

ServerMessage::ServerMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ServerMessage::InitAsDefaultInstance() {
  hello_ = const_cast< ::my_protocol::Hello*>(&::my_protocol::Hello::default_instance());
}

ServerMessage::ServerMessage(const ServerMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ServerMessage::SharedCtor() {
  _cached_size_ = 0;
  hello_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ServerMessage::~ServerMessage() {
  SharedDtor();
}

void ServerMessage::SharedDtor() {
  if (this != default_instance_) {
    delete hello_;
  }
}

void ServerMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerMessage_descriptor_;
}

const ServerMessage& ServerMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_my_5fprotocol_2eproto();  return *default_instance_;
}

ServerMessage* ServerMessage::default_instance_ = NULL;

ServerMessage* ServerMessage::New() const {
  return new ServerMessage;
}

void ServerMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (hello_ != NULL) hello_->::my_protocol::Hello::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ServerMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .my_protocol.Hello hello = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_hello()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ServerMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .my_protocol.Hello hello = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->hello(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ServerMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .my_protocol.Hello hello = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->hello(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ServerMessage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .my_protocol.Hello hello = 1;
    if (has_hello()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->hello());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServerMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ServerMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ServerMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ServerMessage::MergeFrom(const ServerMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      mutable_hello()->::my_protocol::Hello::MergeFrom(from.hello());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ServerMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerMessage::CopyFrom(const ServerMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerMessage::IsInitialized() const {
  
  if (has_hello()) {
    if (!this->hello().IsInitialized()) return false;
  }
  return true;
}

void ServerMessage::Swap(ServerMessage* other) {
  if (other != this) {
    std::swap(hello_, other->hello_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ServerMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServerMessage_descriptor_;
  metadata.reflection = ServerMessage_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ClientMessage::kHelloFieldNumber;
#endif  // !_MSC_VER

ClientMessage::ClientMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ClientMessage::InitAsDefaultInstance() {
  hello_ = const_cast< ::my_protocol::Hello*>(&::my_protocol::Hello::default_instance());
}

ClientMessage::ClientMessage(const ClientMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ClientMessage::SharedCtor() {
  _cached_size_ = 0;
  hello_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientMessage::~ClientMessage() {
  SharedDtor();
}

void ClientMessage::SharedDtor() {
  if (this != default_instance_) {
    delete hello_;
  }
}

void ClientMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClientMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientMessage_descriptor_;
}

const ClientMessage& ClientMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_my_5fprotocol_2eproto();  return *default_instance_;
}

ClientMessage* ClientMessage::default_instance_ = NULL;

ClientMessage* ClientMessage::New() const {
  return new ClientMessage;
}

void ClientMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (hello_ != NULL) hello_->::my_protocol::Hello::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClientMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .my_protocol.Hello hello = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_hello()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ClientMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .my_protocol.Hello hello = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->hello(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ClientMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .my_protocol.Hello hello = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->hello(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ClientMessage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .my_protocol.Hello hello = 1;
    if (has_hello()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->hello());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClientMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClientMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClientMessage::MergeFrom(const ClientMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      mutable_hello()->::my_protocol::Hello::MergeFrom(from.hello());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClientMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClientMessage::CopyFrom(const ClientMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientMessage::IsInitialized() const {
  
  if (has_hello()) {
    if (!this->hello().IsInitialized()) return false;
  }
  return true;
}

void ClientMessage::Swap(ClientMessage* other) {
  if (other != this) {
    std::swap(hello_, other->hello_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClientMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClientMessage_descriptor_;
  metadata.reflection = ClientMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace my_protocol

// @@protoc_insertion_point(global_scope)