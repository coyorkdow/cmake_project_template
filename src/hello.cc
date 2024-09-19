#include "my_project/hello.h"

#include <fmt/format.h>

#include <iostream>

int Hello() {
  std::cout << fmt::format("Hello {}", "World") << std::endl;
  return 0;
}