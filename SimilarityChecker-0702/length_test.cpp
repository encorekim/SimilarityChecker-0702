#include "length.cpp";

#include <gmock/gmock.h>
#include <string.h>

using std::string;

class LengthFixture : public testing::Test {
 public:
  LengthChecker length;
};

TEST_F(LengthFixture, SameLength) {
  double actual = length.getLengthScore("AAA", "BBB");
  EXPECT_DOUBLE_EQ(60, actual);
}

TEST_F(LengthFixture, DoubleLength) {
  double actual = length.getLengthScore("AAA", "BBBBBB");
  EXPECT_DOUBLE_EQ(0, actual);
}

TEST_F(LengthFixture, CommonLength1) {
  double actual = length.getLengthScore("AAAAAA", "BBBB");
  EXPECT_DOUBLE_EQ(30, actual);
}

TEST_F(LengthFixture, CommonLength2) {
  double actual = length.getLengthScore("AAAAA", "BBBB");
  EXPECT_DOUBLE_EQ(45, actual);
}

TEST_F(LengthFixture, ComplexLength) {
  double actual = length.getLengthScore("AAAAAAAA", "BBBBBBB");
  EXPECT_DOUBLE_EQ((double)6 / (double)7 * 60, actual);
}