#include <gmock/gmock.h>
#include <string.h>

#include "length.cpp";

using std::string;

TEST(LengthTest, SameLength) { LengthChecker length;
  int actual = length.getLengthScore("AAA", "BBB");
  EXPECT_EQ(60, actual);
}