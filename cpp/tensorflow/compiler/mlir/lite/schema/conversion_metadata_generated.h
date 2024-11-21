/* Copyright 2021 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CONVERSIONMETADATA_TFLITE_H_
#define FLATBUFFERS_GENERATED_CONVERSIONMETADATA_TFLITE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

namespace tflite {

struct Environment;
struct EnvironmentBuilder;
struct EnvironmentT;

struct SparsityBlockSize;
struct SparsityBlockSizeBuilder;
struct SparsityBlockSizeT;

struct ConversionOptions;
struct ConversionOptionsBuilder;
struct ConversionOptionsT;

struct ConversionMetadata;
struct ConversionMetadataBuilder;
struct ConversionMetadataT;

enum ModelType : int32_t {
  ModelType_NONE = 0,
  ModelType_TF_SAVED_MODEL = 1,
  ModelType_KERAS_MODEL = 2,
  ModelType_TF_CONCRETE_FUNCTIONS = 3,
  ModelType_TF_GRAPH_DEF = 4,
  ModelType_TF_SESSION = 5,
  ModelType_JAX = 6,
  ModelType_MIN = ModelType_NONE,
  ModelType_MAX = ModelType_JAX
};

inline const ModelType (&EnumValuesModelType())[7] {
  static const ModelType values[] = {
    ModelType_NONE,
    ModelType_TF_SAVED_MODEL,
    ModelType_KERAS_MODEL,
    ModelType_TF_CONCRETE_FUNCTIONS,
    ModelType_TF_GRAPH_DEF,
    ModelType_TF_SESSION,
    ModelType_JAX
  };
  return values;
}

inline const char * const *EnumNamesModelType() {
  static const char * const names[8] = {
    "NONE",
    "TF_SAVED_MODEL",
    "KERAS_MODEL",
    "TF_CONCRETE_FUNCTIONS",
    "TF_GRAPH_DEF",
    "TF_SESSION",
    "JAX",
    nullptr
  };
  return names;
}

inline const char *EnumNameModelType(ModelType e) {
  if (::flatbuffers::IsOutRange(e, ModelType_NONE, ModelType_JAX)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesModelType()[index];
}

enum ModelOptimizationMode : int32_t {
  ModelOptimizationMode_PTQ_FLOAT16 = 1001,
  ModelOptimizationMode_PTQ_DYNAMIC_RANGE = 1002,
  ModelOptimizationMode_PTQ_FULL_INTEGER = 1003,
  ModelOptimizationMode_PTQ_INT16 = 1004,
  ModelOptimizationMode_QUANTIZATION_AWARE_TRAINING = 2000,
  ModelOptimizationMode_RANDOM_SPARSITY = 3001,
  ModelOptimizationMode_BLOCK_SPARSITY = 3002,
  ModelOptimizationMode_STRUCTURED_SPARSITY = 3003,
  ModelOptimizationMode_MIN = ModelOptimizationMode_PTQ_FLOAT16,
  ModelOptimizationMode_MAX = ModelOptimizationMode_STRUCTURED_SPARSITY
};

inline const ModelOptimizationMode (&EnumValuesModelOptimizationMode())[8] {
  static const ModelOptimizationMode values[] = {
    ModelOptimizationMode_PTQ_FLOAT16,
    ModelOptimizationMode_PTQ_DYNAMIC_RANGE,
    ModelOptimizationMode_PTQ_FULL_INTEGER,
    ModelOptimizationMode_PTQ_INT16,
    ModelOptimizationMode_QUANTIZATION_AWARE_TRAINING,
    ModelOptimizationMode_RANDOM_SPARSITY,
    ModelOptimizationMode_BLOCK_SPARSITY,
    ModelOptimizationMode_STRUCTURED_SPARSITY
  };
  return values;
}

inline const char *EnumNameModelOptimizationMode(ModelOptimizationMode e) {
  switch (e) {
    case ModelOptimizationMode_PTQ_FLOAT16: return "PTQ_FLOAT16";
    case ModelOptimizationMode_PTQ_DYNAMIC_RANGE: return "PTQ_DYNAMIC_RANGE";
    case ModelOptimizationMode_PTQ_FULL_INTEGER: return "PTQ_FULL_INTEGER";
    case ModelOptimizationMode_PTQ_INT16: return "PTQ_INT16";
    case ModelOptimizationMode_QUANTIZATION_AWARE_TRAINING: return "QUANTIZATION_AWARE_TRAINING";
    case ModelOptimizationMode_RANDOM_SPARSITY: return "RANDOM_SPARSITY";
    case ModelOptimizationMode_BLOCK_SPARSITY: return "BLOCK_SPARSITY";
    case ModelOptimizationMode_STRUCTURED_SPARSITY: return "STRUCTURED_SPARSITY";
    default: return "";
  }
}

struct EnvironmentT : public ::flatbuffers::NativeTable {
  typedef Environment TableType;
  std::string tensorflow_version{};
  uint32_t api_version = 0;
  tflite::ModelType model_type = tflite::ModelType_NONE;
};

struct Environment FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef EnvironmentT NativeTableType;
  typedef EnvironmentBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TENSORFLOW_VERSION = 4,
    VT_API_VERSION = 6,
    VT_MODEL_TYPE = 8
  };
  const ::flatbuffers::String *tensorflow_version() const {
    return GetPointer<const ::flatbuffers::String *>(VT_TENSORFLOW_VERSION);
  }
  uint32_t api_version() const {
    return GetField<uint32_t>(VT_API_VERSION, 0);
  }
  tflite::ModelType model_type() const {
    return static_cast<tflite::ModelType>(GetField<int32_t>(VT_MODEL_TYPE, 0));
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TENSORFLOW_VERSION) &&
           verifier.VerifyString(tensorflow_version()) &&
           VerifyField<uint32_t>(verifier, VT_API_VERSION, 4) &&
           VerifyField<int32_t>(verifier, VT_MODEL_TYPE, 4) &&
           verifier.EndTable();
  }
  EnvironmentT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(EnvironmentT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<Environment> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const EnvironmentT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct EnvironmentBuilder {
  typedef Environment Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_tensorflow_version(::flatbuffers::Offset<::flatbuffers::String> tensorflow_version) {
    fbb_.AddOffset(Environment::VT_TENSORFLOW_VERSION, tensorflow_version);
  }
  void add_api_version(uint32_t api_version) {
    fbb_.AddElement<uint32_t>(Environment::VT_API_VERSION, api_version, 0);
  }
  void add_model_type(tflite::ModelType model_type) {
    fbb_.AddElement<int32_t>(Environment::VT_MODEL_TYPE, static_cast<int32_t>(model_type), 0);
  }
  explicit EnvironmentBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Environment> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Environment>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Environment> CreateEnvironment(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> tensorflow_version = 0,
    uint32_t api_version = 0,
    tflite::ModelType model_type = tflite::ModelType_NONE) {
  EnvironmentBuilder builder_(_fbb);
  builder_.add_model_type(model_type);
  builder_.add_api_version(api_version);
  builder_.add_tensorflow_version(tensorflow_version);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Environment> CreateEnvironmentDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *tensorflow_version = nullptr,
    uint32_t api_version = 0,
    tflite::ModelType model_type = tflite::ModelType_NONE) {
  auto tensorflow_version__ = tensorflow_version ? _fbb.CreateString(tensorflow_version) : 0;
  return tflite::CreateEnvironment(
      _fbb,
      tensorflow_version__,
      api_version,
      model_type);
}

::flatbuffers::Offset<Environment> CreateEnvironment(::flatbuffers::FlatBufferBuilder &_fbb, const EnvironmentT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct SparsityBlockSizeT : public ::flatbuffers::NativeTable {
  typedef SparsityBlockSize TableType;
  std::vector<uint32_t> values{};
};

struct SparsityBlockSize FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef SparsityBlockSizeT NativeTableType;
  typedef SparsityBlockSizeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VALUES = 4
  };
  const ::flatbuffers::Vector<uint32_t> *values() const {
    return GetPointer<const ::flatbuffers::Vector<uint32_t> *>(VT_VALUES);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_VALUES) &&
           verifier.VerifyVector(values()) &&
           verifier.EndTable();
  }
  SparsityBlockSizeT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(SparsityBlockSizeT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<SparsityBlockSize> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const SparsityBlockSizeT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct SparsityBlockSizeBuilder {
  typedef SparsityBlockSize Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_values(::flatbuffers::Offset<::flatbuffers::Vector<uint32_t>> values) {
    fbb_.AddOffset(SparsityBlockSize::VT_VALUES, values);
  }
  explicit SparsityBlockSizeBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<SparsityBlockSize> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<SparsityBlockSize>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<SparsityBlockSize> CreateSparsityBlockSize(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint32_t>> values = 0) {
  SparsityBlockSizeBuilder builder_(_fbb);
  builder_.add_values(values);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<SparsityBlockSize> CreateSparsityBlockSizeDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint32_t> *values = nullptr) {
  auto values__ = values ? _fbb.CreateVector<uint32_t>(*values) : 0;
  return tflite::CreateSparsityBlockSize(
      _fbb,
      values__);
}

::flatbuffers::Offset<SparsityBlockSize> CreateSparsityBlockSize(::flatbuffers::FlatBufferBuilder &_fbb, const SparsityBlockSizeT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct ConversionOptionsT : public ::flatbuffers::NativeTable {
  typedef ConversionOptions TableType;
  std::vector<tflite::ModelOptimizationMode> model_optimization_modes{};
  bool allow_custom_ops = false;
  bool enable_select_tf_ops = false;
  bool force_select_tf_ops = false;
  std::vector<std::unique_ptr<tflite::SparsityBlockSizeT>> sparsity_block_sizes{};
  ConversionOptionsT() = default;
  ConversionOptionsT(const ConversionOptionsT &o);
  ConversionOptionsT(ConversionOptionsT&&) FLATBUFFERS_NOEXCEPT = default;
  ConversionOptionsT &operator=(ConversionOptionsT o) FLATBUFFERS_NOEXCEPT;
};

struct ConversionOptions FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ConversionOptionsT NativeTableType;
  typedef ConversionOptionsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MODEL_OPTIMIZATION_MODES = 4,
    VT_ALLOW_CUSTOM_OPS = 6,
    VT_ENABLE_SELECT_TF_OPS = 8,
    VT_FORCE_SELECT_TF_OPS = 10,
    VT_SPARSITY_BLOCK_SIZES = 12
  };
  const ::flatbuffers::Vector<int32_t> *model_optimization_modes() const {
    return GetPointer<const ::flatbuffers::Vector<int32_t> *>(VT_MODEL_OPTIMIZATION_MODES);
  }
  bool allow_custom_ops() const {
    return GetField<uint8_t>(VT_ALLOW_CUSTOM_OPS, 0) != 0;
  }
  bool enable_select_tf_ops() const {
    return GetField<uint8_t>(VT_ENABLE_SELECT_TF_OPS, 0) != 0;
  }
  bool force_select_tf_ops() const {
    return GetField<uint8_t>(VT_FORCE_SELECT_TF_OPS, 0) != 0;
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<tflite::SparsityBlockSize>> *sparsity_block_sizes() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<tflite::SparsityBlockSize>> *>(VT_SPARSITY_BLOCK_SIZES);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MODEL_OPTIMIZATION_MODES) &&
           verifier.VerifyVector(model_optimization_modes()) &&
           VerifyField<uint8_t>(verifier, VT_ALLOW_CUSTOM_OPS, 1) &&
           VerifyField<uint8_t>(verifier, VT_ENABLE_SELECT_TF_OPS, 1) &&
           VerifyField<uint8_t>(verifier, VT_FORCE_SELECT_TF_OPS, 1) &&
           VerifyOffset(verifier, VT_SPARSITY_BLOCK_SIZES) &&
           verifier.VerifyVector(sparsity_block_sizes()) &&
           verifier.VerifyVectorOfTables(sparsity_block_sizes()) &&
           verifier.EndTable();
  }
  ConversionOptionsT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ConversionOptionsT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<ConversionOptions> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const ConversionOptionsT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ConversionOptionsBuilder {
  typedef ConversionOptions Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_model_optimization_modes(::flatbuffers::Offset<::flatbuffers::Vector<int32_t>> model_optimization_modes) {
    fbb_.AddOffset(ConversionOptions::VT_MODEL_OPTIMIZATION_MODES, model_optimization_modes);
  }
  void add_allow_custom_ops(bool allow_custom_ops) {
    fbb_.AddElement<uint8_t>(ConversionOptions::VT_ALLOW_CUSTOM_OPS, static_cast<uint8_t>(allow_custom_ops), 0);
  }
  void add_enable_select_tf_ops(bool enable_select_tf_ops) {
    fbb_.AddElement<uint8_t>(ConversionOptions::VT_ENABLE_SELECT_TF_OPS, static_cast<uint8_t>(enable_select_tf_ops), 0);
  }
  void add_force_select_tf_ops(bool force_select_tf_ops) {
    fbb_.AddElement<uint8_t>(ConversionOptions::VT_FORCE_SELECT_TF_OPS, static_cast<uint8_t>(force_select_tf_ops), 0);
  }
  void add_sparsity_block_sizes(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<tflite::SparsityBlockSize>>> sparsity_block_sizes) {
    fbb_.AddOffset(ConversionOptions::VT_SPARSITY_BLOCK_SIZES, sparsity_block_sizes);
  }
  explicit ConversionOptionsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ConversionOptions> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ConversionOptions>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ConversionOptions> CreateConversionOptions(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<int32_t>> model_optimization_modes = 0,
    bool allow_custom_ops = false,
    bool enable_select_tf_ops = false,
    bool force_select_tf_ops = false,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<tflite::SparsityBlockSize>>> sparsity_block_sizes = 0) {
  ConversionOptionsBuilder builder_(_fbb);
  builder_.add_sparsity_block_sizes(sparsity_block_sizes);
  builder_.add_model_optimization_modes(model_optimization_modes);
  builder_.add_force_select_tf_ops(force_select_tf_ops);
  builder_.add_enable_select_tf_ops(enable_select_tf_ops);
  builder_.add_allow_custom_ops(allow_custom_ops);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<ConversionOptions> CreateConversionOptionsDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int32_t> *model_optimization_modes = nullptr,
    bool allow_custom_ops = false,
    bool enable_select_tf_ops = false,
    bool force_select_tf_ops = false,
    const std::vector<::flatbuffers::Offset<tflite::SparsityBlockSize>> *sparsity_block_sizes = nullptr) {
  auto model_optimization_modes__ = model_optimization_modes ? _fbb.CreateVector<int32_t>(*model_optimization_modes) : 0;
  auto sparsity_block_sizes__ = sparsity_block_sizes ? _fbb.CreateVector<::flatbuffers::Offset<tflite::SparsityBlockSize>>(*sparsity_block_sizes) : 0;
  return tflite::CreateConversionOptions(
      _fbb,
      model_optimization_modes__,
      allow_custom_ops,
      enable_select_tf_ops,
      force_select_tf_ops,
      sparsity_block_sizes__);
}

::flatbuffers::Offset<ConversionOptions> CreateConversionOptions(::flatbuffers::FlatBufferBuilder &_fbb, const ConversionOptionsT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct ConversionMetadataT : public ::flatbuffers::NativeTable {
  typedef ConversionMetadata TableType;
  std::unique_ptr<tflite::EnvironmentT> environment{};
  std::unique_ptr<tflite::ConversionOptionsT> options{};
  ConversionMetadataT() = default;
  ConversionMetadataT(const ConversionMetadataT &o);
  ConversionMetadataT(ConversionMetadataT&&) FLATBUFFERS_NOEXCEPT = default;
  ConversionMetadataT &operator=(ConversionMetadataT o) FLATBUFFERS_NOEXCEPT;
};

struct ConversionMetadata FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ConversionMetadataT NativeTableType;
  typedef ConversionMetadataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ENVIRONMENT = 4,
    VT_OPTIONS = 6
  };
  const tflite::Environment *environment() const {
    return GetPointer<const tflite::Environment *>(VT_ENVIRONMENT);
  }
  const tflite::ConversionOptions *options() const {
    return GetPointer<const tflite::ConversionOptions *>(VT_OPTIONS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ENVIRONMENT) &&
           verifier.VerifyTable(environment()) &&
           VerifyOffset(verifier, VT_OPTIONS) &&
           verifier.VerifyTable(options()) &&
           verifier.EndTable();
  }
  ConversionMetadataT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ConversionMetadataT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<ConversionMetadata> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const ConversionMetadataT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ConversionMetadataBuilder {
  typedef ConversionMetadata Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_environment(::flatbuffers::Offset<tflite::Environment> environment) {
    fbb_.AddOffset(ConversionMetadata::VT_ENVIRONMENT, environment);
  }
  void add_options(::flatbuffers::Offset<tflite::ConversionOptions> options) {
    fbb_.AddOffset(ConversionMetadata::VT_OPTIONS, options);
  }
  explicit ConversionMetadataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ConversionMetadata> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ConversionMetadata>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ConversionMetadata> CreateConversionMetadata(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<tflite::Environment> environment = 0,
    ::flatbuffers::Offset<tflite::ConversionOptions> options = 0) {
  ConversionMetadataBuilder builder_(_fbb);
  builder_.add_options(options);
  builder_.add_environment(environment);
  return builder_.Finish();
}

::flatbuffers::Offset<ConversionMetadata> CreateConversionMetadata(::flatbuffers::FlatBufferBuilder &_fbb, const ConversionMetadataT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline EnvironmentT *Environment::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<EnvironmentT>(new EnvironmentT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Environment::UnPackTo(EnvironmentT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = tensorflow_version(); if (_e) _o->tensorflow_version = _e->str(); }
  { auto _e = api_version(); _o->api_version = _e; }
  { auto _e = model_type(); _o->model_type = _e; }
}

inline ::flatbuffers::Offset<Environment> Environment::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const EnvironmentT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateEnvironment(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<Environment> CreateEnvironment(::flatbuffers::FlatBufferBuilder &_fbb, const EnvironmentT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const EnvironmentT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _tensorflow_version = _o->tensorflow_version.empty() ? 0 : _fbb.CreateString(_o->tensorflow_version);
  auto _api_version = _o->api_version;
  auto _model_type = _o->model_type;
  return tflite::CreateEnvironment(
      _fbb,
      _tensorflow_version,
      _api_version,
      _model_type);
}

inline SparsityBlockSizeT *SparsityBlockSize::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<SparsityBlockSizeT>(new SparsityBlockSizeT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void SparsityBlockSize::UnPackTo(SparsityBlockSizeT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = values(); if (_e) { _o->values.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->values[_i] = _e->Get(_i); } } else { _o->values.resize(0); } }
}

inline ::flatbuffers::Offset<SparsityBlockSize> SparsityBlockSize::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const SparsityBlockSizeT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateSparsityBlockSize(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<SparsityBlockSize> CreateSparsityBlockSize(::flatbuffers::FlatBufferBuilder &_fbb, const SparsityBlockSizeT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const SparsityBlockSizeT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _values = _o->values.size() ? _fbb.CreateVector(_o->values) : 0;
  return tflite::CreateSparsityBlockSize(
      _fbb,
      _values);
}

inline ConversionOptionsT::ConversionOptionsT(const ConversionOptionsT &o)
      : model_optimization_modes(o.model_optimization_modes),
        allow_custom_ops(o.allow_custom_ops),
        enable_select_tf_ops(o.enable_select_tf_ops),
        force_select_tf_ops(o.force_select_tf_ops) {
  sparsity_block_sizes.reserve(o.sparsity_block_sizes.size());
  for (const auto &sparsity_block_sizes_ : o.sparsity_block_sizes) { sparsity_block_sizes.emplace_back((sparsity_block_sizes_) ? new tflite::SparsityBlockSizeT(*sparsity_block_sizes_) : nullptr); }
}

inline ConversionOptionsT &ConversionOptionsT::operator=(ConversionOptionsT o) FLATBUFFERS_NOEXCEPT {
  std::swap(model_optimization_modes, o.model_optimization_modes);
  std::swap(allow_custom_ops, o.allow_custom_ops);
  std::swap(enable_select_tf_ops, o.enable_select_tf_ops);
  std::swap(force_select_tf_ops, o.force_select_tf_ops);
  std::swap(sparsity_block_sizes, o.sparsity_block_sizes);
  return *this;
}

inline ConversionOptionsT *ConversionOptions::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<ConversionOptionsT>(new ConversionOptionsT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ConversionOptions::UnPackTo(ConversionOptionsT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = model_optimization_modes(); if (_e) { _o->model_optimization_modes.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->model_optimization_modes[_i] = static_cast<tflite::ModelOptimizationMode>(_e->Get(_i)); } } else { _o->model_optimization_modes.resize(0); } }
  { auto _e = allow_custom_ops(); _o->allow_custom_ops = _e; }
  { auto _e = enable_select_tf_ops(); _o->enable_select_tf_ops = _e; }
  { auto _e = force_select_tf_ops(); _o->force_select_tf_ops = _e; }
  { auto _e = sparsity_block_sizes(); if (_e) { _o->sparsity_block_sizes.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { if(_o->sparsity_block_sizes[_i]) { _e->Get(_i)->UnPackTo(_o->sparsity_block_sizes[_i].get(), _resolver); } else { _o->sparsity_block_sizes[_i] = std::unique_ptr<tflite::SparsityBlockSizeT>(_e->Get(_i)->UnPack(_resolver)); }; } } else { _o->sparsity_block_sizes.resize(0); } }
}

inline ::flatbuffers::Offset<ConversionOptions> ConversionOptions::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const ConversionOptionsT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateConversionOptions(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<ConversionOptions> CreateConversionOptions(::flatbuffers::FlatBufferBuilder &_fbb, const ConversionOptionsT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const ConversionOptionsT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _model_optimization_modes = _o->model_optimization_modes.size() ? _fbb.CreateVectorScalarCast<int32_t>(::flatbuffers::data(_o->model_optimization_modes), _o->model_optimization_modes.size()) : 0;
  auto _allow_custom_ops = _o->allow_custom_ops;
  auto _enable_select_tf_ops = _o->enable_select_tf_ops;
  auto _force_select_tf_ops = _o->force_select_tf_ops;
  auto _sparsity_block_sizes = _o->sparsity_block_sizes.size() ? _fbb.CreateVector<::flatbuffers::Offset<tflite::SparsityBlockSize>> (_o->sparsity_block_sizes.size(), [](size_t i, _VectorArgs *__va) { return CreateSparsityBlockSize(*__va->__fbb, __va->__o->sparsity_block_sizes[i].get(), __va->__rehasher); }, &_va ) : 0;
  return tflite::CreateConversionOptions(
      _fbb,
      _model_optimization_modes,
      _allow_custom_ops,
      _enable_select_tf_ops,
      _force_select_tf_ops,
      _sparsity_block_sizes);
}

inline ConversionMetadataT::ConversionMetadataT(const ConversionMetadataT &o)
      : environment((o.environment) ? new tflite::EnvironmentT(*o.environment) : nullptr),
        options((o.options) ? new tflite::ConversionOptionsT(*o.options) : nullptr) {
}

inline ConversionMetadataT &ConversionMetadataT::operator=(ConversionMetadataT o) FLATBUFFERS_NOEXCEPT {
  std::swap(environment, o.environment);
  std::swap(options, o.options);
  return *this;
}

inline ConversionMetadataT *ConversionMetadata::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<ConversionMetadataT>(new ConversionMetadataT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ConversionMetadata::UnPackTo(ConversionMetadataT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = environment(); if (_e) { if(_o->environment) { _e->UnPackTo(_o->environment.get(), _resolver); } else { _o->environment = std::unique_ptr<tflite::EnvironmentT>(_e->UnPack(_resolver)); } } else if (_o->environment) { _o->environment.reset(); } }
  { auto _e = options(); if (_e) { if(_o->options) { _e->UnPackTo(_o->options.get(), _resolver); } else { _o->options = std::unique_ptr<tflite::ConversionOptionsT>(_e->UnPack(_resolver)); } } else if (_o->options) { _o->options.reset(); } }
}

inline ::flatbuffers::Offset<ConversionMetadata> ConversionMetadata::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const ConversionMetadataT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateConversionMetadata(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<ConversionMetadata> CreateConversionMetadata(::flatbuffers::FlatBufferBuilder &_fbb, const ConversionMetadataT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const ConversionMetadataT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _environment = _o->environment ? CreateEnvironment(_fbb, _o->environment.get(), _rehasher) : 0;
  auto _options = _o->options ? CreateConversionOptions(_fbb, _o->options.get(), _rehasher) : 0;
  return tflite::CreateConversionMetadata(
      _fbb,
      _environment,
      _options);
}

inline const tflite::ConversionMetadata *GetConversionMetadata(const void *buf) {
  return ::flatbuffers::GetRoot<tflite::ConversionMetadata>(buf);
}

inline const tflite::ConversionMetadata *GetSizePrefixedConversionMetadata(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<tflite::ConversionMetadata>(buf);
}

inline bool VerifyConversionMetadataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<tflite::ConversionMetadata>(nullptr);
}

inline bool VerifySizePrefixedConversionMetadataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<tflite::ConversionMetadata>(nullptr);
}

inline void FinishConversionMetadataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<tflite::ConversionMetadata> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedConversionMetadataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<tflite::ConversionMetadata> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<tflite::ConversionMetadataT> UnPackConversionMetadata(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<tflite::ConversionMetadataT>(GetConversionMetadata(buf)->UnPack(res));
}

inline std::unique_ptr<tflite::ConversionMetadataT> UnPackSizePrefixedConversionMetadata(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<tflite::ConversionMetadataT>(GetSizePrefixedConversionMetadata(buf)->UnPack(res));
}

}  // namespace tflite

#endif  // FLATBUFFERS_GENERATED_CONVERSIONMETADATA_TFLITE_H_
