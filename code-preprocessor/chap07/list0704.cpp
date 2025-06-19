/** @file list0704.cxx */
/** Listing 7-4. Compute Sum of Integers from 10 to 20 */
#include <iostream>

int main()
{
  int sum{0};

  // Write the loop here.
  for (size_t i = 10; i < 21; i++)
  {
    sum += i;  // Add the current value of i to sum
  }
  

  std::cout << "Sum of 10 to 20 = " << sum << '\n';
}
