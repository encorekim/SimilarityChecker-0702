#include "alpha.cpp";

#include <gmock/gmock.h>
#include <string.h>

#include <stdexcept>

using std::string;

TEST(AlphaTest, ZeroLengthInput) {
  AlphabetChecker alpha;
  EXPECT_THROW(alpha.getAlphabetScore("A", ""), std::invalid_argument);
}