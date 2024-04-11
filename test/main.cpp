#include <cassert>
#include "sum.hpp"

void test_sum() {
  int result = sum(1, 2);
  int expected = 4;

  assert(result == expected);
}

int main(int args, char **argv) {
  test_sum();
}
