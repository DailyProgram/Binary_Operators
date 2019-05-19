#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const unsigned int ONE = 1;
  const unsigned int ZERO = 0;
  const unsigned int MAX_B = 31;
  unsigned int n, count = ZERO, key = 3;
  scanf("%d", &n);
  for (int i = ZERO; i <= MAX_B; i++) {
    if ((key & n) == key) {
      count = count + ONE;
    }
    key = key << ONE;
  }
  printf("%d\n", count);
  return 0;
}
