/** @file list2201.cpp */
/** Listing 22-1. Calling transform to Apply a Function to Each Element of a Range */
#include <iostream>
#include <iterator>
#include <ranges>

int times_two(int i)
{
  return i * 2;
}

int plus_three(int i)
{
  return i + 3;
}

int main()
{
  // Read integers from standard input, apply the `times_two` function,
  // then apply the `plus_three` function to each element, and print the results.
  // The code uses C++20's ranges library to create a pipeline of transformations.
   auto data{ std::ranges::istream_view<int>(std::cin)
              | std::ranges::views::transform(times_two)   // std::ranges::views::transform C++20 引入的算法，用于对范围中的元素进行转换，并将结果写入目标位置。
              | std::ranges::views::transform(plus_three)
   };
   for (auto element : data)
      std::cout << element << '\n';
}
