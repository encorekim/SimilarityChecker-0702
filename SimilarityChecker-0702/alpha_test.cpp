#include "alpha.cpp";

#include <gmock/gmock.h>
#include <string.h>

#include <stdexcept>

using std::string;

class AlphaFixture : public testing::Test {
 public:
  AlphabetChecker alpha;
};

TEST_F(AlphaFixture, ZeroLengthInputs) {
  EXPECT_THROW(alpha.getAlphabetScore("", ""), std::invalid_argument);
}

TEST_F(AlphaFixture, ZeroAndNonZero) {
  EXPECT_EQ(0, alpha.getAlphabetScore("A", ""));
}