#include "alpha.cpp";

#include <gmock/gmock.h>
#include <string.h>

#include <stdexcept>

using std::string;

TEST(AlphaTest, ZeroLengthInputs) {
  AlphabetChecker alpha;
  EXPECT_THROW(alpha.getAlphabetScore("", ""), std::invalid_argument);
}

TEST(AlphaTest, ZeroAndNonZero) {
  AlphabetChecker alpha;
  EXPECT_EQ(0, alpha.getAlphabetScore("A", ""));
}