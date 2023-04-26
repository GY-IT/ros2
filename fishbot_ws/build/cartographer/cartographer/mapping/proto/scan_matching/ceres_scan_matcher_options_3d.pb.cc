// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_3d.proto

#include "cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_3d.pb.h"

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

namespace protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_CeresSolverOptions;
}  // namespace protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {
class CeresScanMatcherOptions3DDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CeresScanMatcherOptions3D>
      _instance;
} _CeresScanMatcherOptions3D_default_instance_;
}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer
namespace protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto {
static void InitDefaultsCeresScanMatcherOptions3D() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::cartographer::mapping::scan_matching::proto::_CeresScanMatcherOptions3D_default_instance_;
    new (ptr) ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_CeresScanMatcherOptions3D =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsCeresScanMatcherOptions3D}, {
      &protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto::scc_info_CeresSolverOptions.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CeresScanMatcherOptions3D.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D, occupied_space_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D, translation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D, rotation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D, only_optimize_yaw_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D, ceres_solver_options_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::cartographer::mapping::scan_matching::proto::_CeresScanMatcherOptions3D_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_3d.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\nLcartographer/mapping/proto/scan_matchi"
      "ng/ceres_scan_matcher_options_3d.proto\022("
      "cartographer.mapping.scan_matching.proto"
      "\0324cartographer/common/proto/ceres_solver"
      "_options.proto\"\327\001\n\031CeresScanMatcherOptio"
      "ns3D\022\035\n\025occupied_space_weight\030\001 \003(\001\022\032\n\022t"
      "ranslation_weight\030\002 \001(\001\022\027\n\017rotation_weig"
      "ht\030\003 \001(\001\022\031\n\021only_optimize_yaw\030\005 \001(\010\022K\n\024c"
      "eres_solver_options\030\006 \001(\0132-.cartographer"
      ".common.proto.CeresSolverOptionsb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 400);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/scan_matching/ceres_scan_matcher_options_3d.proto", &protobuf_RegisterTypes);
  ::protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto::AddDescriptors();
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
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {

// ===================================================================

void CeresScanMatcherOptions3D::InitAsDefaultInstance() {
  ::cartographer::mapping::scan_matching::proto::_CeresScanMatcherOptions3D_default_instance_._instance.get_mutable()->ceres_solver_options_ = const_cast< ::cartographer::common::proto::CeresSolverOptions*>(
      ::cartographer::common::proto::CeresSolverOptions::internal_default_instance());
}
void CeresScanMatcherOptions3D::clear_ceres_solver_options() {
  if (GetArenaNoVirtual() == NULL && ceres_solver_options_ != NULL) {
    delete ceres_solver_options_;
  }
  ceres_solver_options_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CeresScanMatcherOptions3D::kOccupiedSpaceWeightFieldNumber;
const int CeresScanMatcherOptions3D::kTranslationWeightFieldNumber;
const int CeresScanMatcherOptions3D::kRotationWeightFieldNumber;
const int CeresScanMatcherOptions3D::kOnlyOptimizeYawFieldNumber;
const int CeresScanMatcherOptions3D::kCeresSolverOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CeresScanMatcherOptions3D::CeresScanMatcherOptions3D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto::scc_info_CeresScanMatcherOptions3D.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
}
CeresScanMatcherOptions3D::CeresScanMatcherOptions3D(const CeresScanMatcherOptions3D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      occupied_space_weight_(from.occupied_space_weight_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ceres_solver_options()) {
    ceres_solver_options_ = new ::cartographer::common::proto::CeresSolverOptions(*from.ceres_solver_options_);
  } else {
    ceres_solver_options_ = NULL;
  }
  ::memcpy(&translation_weight_, &from.translation_weight_,
    static_cast<size_t>(reinterpret_cast<char*>(&only_optimize_yaw_) -
    reinterpret_cast<char*>(&translation_weight_)) + sizeof(only_optimize_yaw_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
}

void CeresScanMatcherOptions3D::SharedCtor() {
  ::memset(&ceres_solver_options_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&only_optimize_yaw_) -
      reinterpret_cast<char*>(&ceres_solver_options_)) + sizeof(only_optimize_yaw_));
}

CeresScanMatcherOptions3D::~CeresScanMatcherOptions3D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  SharedDtor();
}

void CeresScanMatcherOptions3D::SharedDtor() {
  if (this != internal_default_instance()) delete ceres_solver_options_;
}

void CeresScanMatcherOptions3D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CeresScanMatcherOptions3D::descriptor() {
  ::protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CeresScanMatcherOptions3D& CeresScanMatcherOptions3D::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto::scc_info_CeresScanMatcherOptions3D.base);
  return *internal_default_instance();
}


void CeresScanMatcherOptions3D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  occupied_space_weight_.Clear();
  if (GetArenaNoVirtual() == NULL && ceres_solver_options_ != NULL) {
    delete ceres_solver_options_;
  }
  ceres_solver_options_ = NULL;
  ::memset(&translation_weight_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&only_optimize_yaw_) -
      reinterpret_cast<char*>(&translation_weight_)) + sizeof(only_optimize_yaw_));
  _internal_metadata_.Clear();
}

bool CeresScanMatcherOptions3D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated double occupied_space_weight = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_occupied_space_weight())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 10u, input, this->mutable_occupied_space_weight())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double translation_weight = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &translation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double rotation_weight = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &rotation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool only_optimize_yaw = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &only_optimize_yaw_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_ceres_solver_options()));
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
  // @@protoc_insertion_point(parse_success:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  return false;
#undef DO_
}

void CeresScanMatcherOptions3D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated double occupied_space_weight = 1;
  if (this->occupied_space_weight_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _occupied_space_weight_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteDoubleArray(
      this->occupied_space_weight().data(), this->occupied_space_weight_size(), output);
  }

  // double translation_weight = 2;
  if (this->translation_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->translation_weight(), output);
  }

  // double rotation_weight = 3;
  if (this->rotation_weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->rotation_weight(), output);
  }

  // bool only_optimize_yaw = 5;
  if (this->only_optimize_yaw() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->only_optimize_yaw(), output);
  }

  // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 6;
  if (this->has_ceres_solver_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_ceres_solver_options(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
}

::google::protobuf::uint8* CeresScanMatcherOptions3D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated double occupied_space_weight = 1;
  if (this->occupied_space_weight_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _occupied_space_weight_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->occupied_space_weight_, target);
  }

  // double translation_weight = 2;
  if (this->translation_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->translation_weight(), target);
  }

  // double rotation_weight = 3;
  if (this->rotation_weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->rotation_weight(), target);
  }

  // bool only_optimize_yaw = 5;
  if (this->only_optimize_yaw() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->only_optimize_yaw(), target);
  }

  // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 6;
  if (this->has_ceres_solver_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_ceres_solver_options(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  return target;
}

size_t CeresScanMatcherOptions3D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated double occupied_space_weight = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->occupied_space_weight_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _occupied_space_weight_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 6;
  if (this->has_ceres_solver_options()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *ceres_solver_options_);
  }

  // double translation_weight = 2;
  if (this->translation_weight() != 0) {
    total_size += 1 + 8;
  }

  // double rotation_weight = 3;
  if (this->rotation_weight() != 0) {
    total_size += 1 + 8;
  }

  // bool only_optimize_yaw = 5;
  if (this->only_optimize_yaw() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CeresScanMatcherOptions3D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  GOOGLE_DCHECK_NE(&from, this);
  const CeresScanMatcherOptions3D* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CeresScanMatcherOptions3D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
    MergeFrom(*source);
  }
}

void CeresScanMatcherOptions3D::MergeFrom(const CeresScanMatcherOptions3D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  occupied_space_weight_.MergeFrom(from.occupied_space_weight_);
  if (from.has_ceres_solver_options()) {
    mutable_ceres_solver_options()->::cartographer::common::proto::CeresSolverOptions::MergeFrom(from.ceres_solver_options());
  }
  if (from.translation_weight() != 0) {
    set_translation_weight(from.translation_weight());
  }
  if (from.rotation_weight() != 0) {
    set_rotation_weight(from.rotation_weight());
  }
  if (from.only_optimize_yaw() != 0) {
    set_only_optimize_yaw(from.only_optimize_yaw());
  }
}

void CeresScanMatcherOptions3D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CeresScanMatcherOptions3D::CopyFrom(const CeresScanMatcherOptions3D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.scan_matching.proto.CeresScanMatcherOptions3D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CeresScanMatcherOptions3D::IsInitialized() const {
  return true;
}

void CeresScanMatcherOptions3D::Swap(CeresScanMatcherOptions3D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CeresScanMatcherOptions3D::InternalSwap(CeresScanMatcherOptions3D* other) {
  using std::swap;
  occupied_space_weight_.InternalSwap(&other->occupied_space_weight_);
  swap(ceres_solver_options_, other->ceres_solver_options_);
  swap(translation_weight_, other->translation_weight_);
  swap(rotation_weight_, other->rotation_weight_);
  swap(only_optimize_yaw_, other->only_optimize_yaw_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CeresScanMatcherOptions3D::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2fscan_5fmatching_2fceres_5fscan_5fmatcher_5foptions_5f3d_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D* Arena::CreateMaybeMessage< ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D >(Arena* arena) {
  return Arena::CreateInternal< ::cartographer::mapping::scan_matching::proto::CeresScanMatcherOptions3D >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
