// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace mean_float_2_relaxed {
std::vector<MixedTypedExample> examples = {
// Generated mean_float_2_relaxed test
#include "generated/examples/mean_float_2_relaxed.example.cpp"
};
// Generated model constructor
#include "generated/models/mean_float_2_relaxed.model.cpp"
} // namespace mean_float_2_relaxed
TEST_F(GeneratedTests, mean_float_2_relaxed) {
    execute(mean_float_2_relaxed::CreateModel,
            mean_float_2_relaxed::is_ignored,
            mean_float_2_relaxed::examples);
}