// Chapter 1 Exercise 3
#include <iostream>
#include <string>

int main()
{
  { const std::string s = "a string";
    std::cout << s << std::endl; }

  { const std::string s = "another string";
    std::cout << s << std::endl; }

  return 0;
}

// This is a valid program.