#include "length.cpp";

#include <gmock/gmock.h>
#include <string.h>

using std::string;

class LengthFixture : public testing::Test {
 public:
  LengthChecker length;
};

TEST_F(LengthFixture, SameLength) {
  int actual = length.getLengthScore("AAA", "BBB");
  EXPECT_EQ(60, actual);
}

TEST_F(LengthFixture, DoubleLength) {
  int actual = length.getLengthScore("AAA", "BBBBBB");
  EXPECT_EQ(0, actual);
}