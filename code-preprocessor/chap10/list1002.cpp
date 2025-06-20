/** @file list1002.cpp */
/** Listing 10-2. Demonstrating the std::ostream_iterator Class */
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
  std::vector<int> data;
  int element;
  while (std::cin >> element)
    data.emplace_back(element);

  std::ranges::sort(data);

  // 使用 ranges::copy 复制整个范围
  // 并将结果输出到 std::cout，使用 std::ostream_iterator
  // 每个元素后面跟一个换行符
  std::ranges::copy(data, std::ostream_iterator<int>{std::cout, "\n"});
}
