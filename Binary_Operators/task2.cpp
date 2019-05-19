#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const unsigned int ONE = 1;
  const unsigned int ZERO = 0;
  const unsigned int MAX_B = 31;
  unsigned int n, key = 2147483648;
  scanf("%d", &n);
  for (int i = ZERO; i <= MAX_B; i++) {
    if ((key & n) != ZERO) {
      cout << ONE;
    } else
      cout << ZERO;
    key = key >> ONE;
  }
  return 0;
}
