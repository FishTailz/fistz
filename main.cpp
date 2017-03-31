#include <iostream>

int main() {
  [[maybe_unused]] auto a = 0;
  std::cout << a << std::endl;
  return a;
}
