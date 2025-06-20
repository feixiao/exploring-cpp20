/** @file list1802.cpp */
/** Listing 18-2. Testing a Character by Calling std::isalnum  */
#include <iostream>
#include <locale>
#include <map>
#include <string>

int main()
{
  using count_map = std::map<std::string, int>;
  count_map counts{};
  std::string word{};

  // Read words from the standard input and count the number of times
  // each word occurs.
  while (std::cin >> word)
  {
    // Make a copy of word, keeping only alphabetic characters.
    std::string copy{};
    for (char ch : word)
      // std::isalnum<char> 是一个内联函数模板，用于检查给定字符是否为字母或数字。它通过使用指定的 std::locale 和 ctype facet 来执行检查
      if (std::isalnum(ch, std::locale{""}))
        copy.push_back(ch);
    // The "word" might be all punctuation, so the copy would be empty.
    // Don't count empty strings.
    if (not copy.empty())
      ++counts[copy];
  }

  // For each word/count pair, print the word & count on one line.523175
  for (auto pair : counts)
    std::cout << pair.first << '\t' << pair.second << '\n';
}
