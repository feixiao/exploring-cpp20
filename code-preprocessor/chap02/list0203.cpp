/** @file list0203.cpp */
/** Listing 2-3. Determining the Number of Bits in a bool */
#include <iostream>
#include <limits>
#include <cstdint> // for int32_t, uint32_t

int main()
{
  // Note that "digits" means binary digits, i.e., bits.
  // digits​ 定义为不包括符号位的有效值位数
  std::cout << "bits per bool: " << std::numeric_limits<bool>::digits << '\n';
  std::cout << "bits per int32_t: " << std::numeric_limits<int32_t>::digits << '\n';    // 31bits, 带符合
  std::cout << "bits per uint32_t: " << std::numeric_limits<uint32_t>::digits << '\n';  // 32bits，无符号
}
