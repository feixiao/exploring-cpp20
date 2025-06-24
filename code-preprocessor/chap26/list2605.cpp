/** @file list2605.cpp */
/** Listing 26-5. User-Defined Literal */
#include <iostream>

// User-defined literal for short type
constexpr short operator "" _S(unsigned long long value)
{
    return static_cast<short>(value);
}

void print(short s)
{
   std::cout << "short=" << s << '\n';
}

void print(int i)
{
   std::cout << "int=" << i << '\n';
}

int main()
{
   print(42);
   print(42_S);
}
