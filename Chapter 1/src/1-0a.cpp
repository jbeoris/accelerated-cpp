// Chapter 1 Exercise 0.a
#include <iostream>
#include <string>

int main()
{
  // ask for person's name
  std::cout << "Please enter your first name: ";

  // read the name
  std::string name;
  std::cin >> name;

  // write a greeting
  std::cout << "Hello, " << name << "!" << std::endl;
  return 0;
}