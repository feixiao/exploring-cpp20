/** @file list0804.cpp */
/** Listing 8-4. Exploring Field Width, Fill Character, and Alignment  */
#include <iomanip>
#include <iostream>

int main()
{
  using namespace std;
  cout << '|' << setfill('*') << setw(6) <<  1234 << '|' << '\n';
  cout << '|' << left <<         setw(6) <<  1234 << '|' << '\n';  // 填充字符在右边
  cout << '|' <<                 setw(6) << -1234 << '|' << '\n';  // 延续之前的风格
  cout << '|' << right <<        setw(6) << -1234 << '|' << '\n';  // 填充字符在左边
}
