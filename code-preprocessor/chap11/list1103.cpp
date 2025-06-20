/** @file list1103.cpp */
/** Listing 11-3. Reversing the Input Order */
#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>
#include <vector>

int main()
{
  std::vector<int> data{};
  std::ranges::copy(std::ranges::istream_view<int>(std::cin),
                    std::back_inserter(data));

  // Reverse the order of the elements in the vector.
  // This uses a two-iterator approach to swap elements from the start and end
  // of the vector until they meet in the middle.
  // The first iterator starts at the beginning of the vector, and the second
  for (auto start{data.begin()}, end{data.end()}; start != end; /*empty*/)
  {
    --end;
    if (start != end)
    {
      std::iter_swap(start, end);
      ++start;
    }
  }

  std::ranges::copy(data, std::ostream_iterator<int>(std::cout, "\n"));
}
