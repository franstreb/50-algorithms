#include <gtest/gtest.h>
#include <vector>

#include "shell_sort.h"

// Demonstrate some basic assertions.
TEST(SortTest, ShellTest) 
{
  // Data definition
  std::vector<int> data = {25, 22, 21, 24, 23, 27, 26};
  // Data result
  std::vector<int> result = {21, 22, 23, 24, 25, 26, 27};

  int nbPass = shell_sort(data.begin(), data.end());
  
  // Expect equality.
  EXPECT_EQ(nbPass, 4);
}
