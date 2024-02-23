#include "include/addition.hpp"
#include "include/division.hpp"
#include "include/print_result.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  float first_num;
  std::cout << "first_number:\t";
  std::cin >> first_num;

  float second_number;
  std::cout << "second_number:\t";
  std::cin >> second_number;

  float result_add = addition(first_num, second_number);
  float result_division = division(first_num, second_number);

  print_result("Addition", result_add);
  print_result("Division", result_division);
  return 0;
}
