#include <iostream>

int main() {
  [[maybe_unused]] auto a = 0;
#ifdef TEST
  std::cout << a << std::endl;
#endif
  return 0;
}
