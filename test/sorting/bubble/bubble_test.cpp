#include <gtest/gtest.h>
#include <vector>

#include "bubble-sort.h"

// Demonstrate some basic assertions.
TEST(SortTest, BubbleTest) 
{
  // Data definition
  std::vector<int> data = {25, 21, 22, 24, 23, 27, 26};
  // Data result
  std::vector<int> result = {21, 22, 23, 24, 25, 26, 27};

  int nbPass = bubble_sort(data.begin(), data.end());
  
  // Expect equality.
  EXPECT_EQ(data, result);
  EXPECT_EQ(nbPass, 3);
}
