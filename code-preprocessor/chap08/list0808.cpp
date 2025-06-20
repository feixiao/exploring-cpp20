/** @file list0808.cpp */
/** Listing 8-8. Printing a Multiplication Table Using the format Function */
#include <format>
#include <iostream>

int main() {
  int constexpr low{1};       ///< Minimum value for the table
  int constexpr high{10};     ///< Maximum value for the table
  int constexpr colwidth{4};  ///< Fixed width for all columns

  // First print the header.
  // 解释下：使用 std::format 函数来格式化输出。
  // "{1:>{0}c}|"：格式化规范
  //  {1:...}：操作第 2 个参数（'*'，索引从 0 开始）
  //  :>{0}c：格式说明符分三部分：
  //    1. >{0}：右对齐 + 使用第 1 个参数（2）作为宽度值
  //    2. c：将参数格式化为字符类型
  //    3. 最终的 | 是字面字符
  std::cout << std::format("{1:>{0}c}|", colwidth, '*');

  for (int i{low}; i <= high; i = i + 1)
    std::cout << std::format("{1:{0}}", colwidth, i);
  std::cout << '\n';

  // Print the table rule by using the fill character.
  std::cout << std::format("{2:->{0}}+{2:->{1}}\n", colwidth,
                           (high - low + 1) * colwidth, "");

  // For each row...
  for (int row{low}; row <= high; row = row + 1) {
    std::cout << std::format("{1:{0}}|", colwidth, row);
    // Print all the columns.
    for (int col{low}; col <= high; col = col + 1)
      std::cout << std::format("{1:{0}}", colwidth, row * col);
    std::cout << '\n';
  }
}
