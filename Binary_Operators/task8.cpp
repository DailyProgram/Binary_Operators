#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const unsigned int ONE = 1;
  unsigned char n, key = 128;
  scanf("%d", &n);
  if ((key & n) == key) {
    n = n << ONE;
    n = n | ONE;
  } else {
    n = n << ONE;
  }
  cout << (int)n << endl;
  return 0;
}
