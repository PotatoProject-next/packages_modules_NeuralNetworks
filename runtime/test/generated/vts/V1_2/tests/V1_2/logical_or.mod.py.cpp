// Generated from logical_or.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::logical_or {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple();

} // namespace generated_tests::logical_or

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, logical_or_simple) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::logical_or::get_examples_simple());
}

TEST_F(ValidationTest, logical_or_simple) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::logical_or::get_examples_simple());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or

namespace generated_tests::logical_or {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape();

} // namespace generated_tests::logical_or

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, logical_or_simple_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::logical_or::get_examples_simple_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, logical_or_simple_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::logical_or::get_examples_simple_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or

namespace generated_tests::logical_or {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast();

} // namespace generated_tests::logical_or

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, logical_or_broadcast) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::logical_or::get_examples_broadcast());
}

TEST_F(ValidationTest, logical_or_broadcast) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::logical_or::get_examples_broadcast());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or

namespace generated_tests::logical_or {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape();

} // namespace generated_tests::logical_or

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, logical_or_broadcast_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::logical_or::get_examples_broadcast_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, logical_or_broadcast_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::logical_or::get_examples_broadcast_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_or
