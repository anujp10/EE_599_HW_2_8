#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MedianShould, MedianReturn) {
  Solution solution;
  std::vector<int> input = {1, 2, 3, 8, 0, -1, -98, 1002};
  int actual = solution.SpecialMedian(input);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(MedianShould_1, MedianReturn_1) {
  Solution solution;
  std::vector<int> input = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  int actual = solution.SpecialMedian(input);
  int expected = 69;
  EXPECT_EQ(expected, actual);
}

TEST(MedianShould_2, MedianReturn_2) {
  Solution solution;
  std::vector<int> input = {};
  int actual = solution.SpecialMedian(input);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}