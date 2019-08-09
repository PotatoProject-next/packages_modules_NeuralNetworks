// Generated from concat_float16_1.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::concat_float16_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::concat_float16_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_float16_1 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, concat_float16_1) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::concat_float16_1::get_examples());
}

TEST_F(ValidationTest, concat_float16_1) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_float16_1::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_float16_1

namespace generated_tests::concat_float16_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::concat_float16_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_float16_1 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, concat_float16_1_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::concat_float16_1::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, concat_float16_1_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_float16_1::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_float16_1
