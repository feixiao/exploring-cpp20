/** @file list1003.cpp */
/** Listing 10-3. Demonstrating the std::back_inserter Function */
#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>
#include <vector>

int main()
{
  std::vector<int> data;

  // Read integers from standard input and store them in the vector.
  // The std::ranges::istream_view<int> reads integers from std::cin.
  // The std::back_inserter(data) creates an output iterator that appends
  // elements to the end of the vector `data`.
  // The std::ranges::copy function copies the input range into the vector.
  // Finally, the vector is sorted and printed.
  // This code uses the C++20 ranges library to simplify the process of reading,
  // sorting, and printing integers from standard input.
  std::ranges::copy(std::ranges::istream_view<int>(std::cin),
                    std::back_inserter(data));
  std::ranges::sort(data);
  std::ranges::copy(data, std::ostream_iterator<int>{std::cout, "\n"});
}
