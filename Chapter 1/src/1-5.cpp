// Chapter 1 Exercise 5
// #include <iostream>
// #include <string>

// int main()
// {
//   { const std::string s = "a string";
//   {
//     std::string x = s + ", really";
//     std::cout << s << std::endl; }
//     std::cout << x << std::endl;
//   }
//   return 0;
// }

// This is an invalid program.
// x is called outside of the scope in which is is defined.

// Here is a valid implementation

#include <iostream>
#include <string>

int main()
{
  { const std::string s = "a string";
  {
    std::string x = s + ", really";
    std::cout << s << std::endl;
    std::cout << x << std::endl; }
  }
  return 0;
}