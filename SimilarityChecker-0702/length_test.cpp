#include "length.cpp";

#include <gmock/gmock.h>
#include <string.h>

using std::string;

class LengthFixture : public testing::Test {
 public:
  LengthChecker length;
  void testLength(double expected, string A, string B) {
    double actual = length.getLengthScore(A, B);
    EXPECT_DOUBLE_EQ(expected, actual);
  }
};

TEST_F(LengthFixture, SameLength) { testLength(60, "AAA", "BBB"); }

TEST_F(LengthFixture, DoubleLength) { testLength(0, "AAA", "BBBBBB"); }

TEST_F(LengthFixture, ExceedDoubleLength) { testLength(0, "AAAAAAA", "BBB"); }

TEST_F(LengthFixture, CommonLength) {
  testLength(30, "AAAAAA", "BBBB");
  testLength(45, "AAAA", "BBBBB");
}

TEST_F(LengthFixture, ComplexLength) {
  double expected = (double)6 / (double)7 * 60;
  testLength(expected, "AAAAAAAA", "BBBBBBB");
}