#include "solution.h"
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

int Solution::SpecialMedian(std::vector<int> &input)
{
  int median = 0;

  if (input.size() == 0)
    return -1;

  std::sort(input.begin(), input.end());

  if (input.size() % 2)
  {
    median = input[input.size() / 2];
    sort(input.begin(), (input.begin() + (input.size() / 2)), std::greater<int>());
    sort((input.begin() + (input.size() / 2) + 1), input.end(), std::greater<int>());
  }
  else
  {
    median = (input[(input.size() / 2) - 1] + input[input.size() / 2]) / 2;
    sort(input.begin(), (input.begin() + ((input.size() / 2) - 1)), std::greater<int>());
    sort((input.begin() + ((input.size() / 2) + 1)), input.end(), std::greater<int>());
  }

  return median;
}
