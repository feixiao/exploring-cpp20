/** @file list2401.cpp */
/** Listing 24-1. Calling transform to Apply a Lambda to Each Element of an Array */
#include <iostream>
#include <iterator>
#include <ranges>

int main()
{
   auto data{ std::ranges::istream_view<int>(std::cin)
              | std::views::transform([](int i) { return i * 2; })
              | std::views::transform([](int i) { return i + 3; })
   };
   // Print the transformed data, one element per line.
   // The first transform multiplies each element by 2, and the second adds 3
   // to each element.
   // The result is that each input integer is transformed to (2 * input + 3).
   // For example, if the input is 1, 2, 3, the output will be:
   // 5, 7, 9.
   // The input is read from standard input, and the output is printed to standard output.
   // std::ranges::copy(data, std::ostream_iterator<int>{std::cout, "\n"});

   for (auto element : data)
      std::cout << element << '\n';
}
