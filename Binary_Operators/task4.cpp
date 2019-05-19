#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const unsigned int ONE = 1;
  const unsigned int ZERO = 0;
  const unsigned int MAX_B = 31;
  unsigned int n, number = ZERO, key = 2147483648;
  scanf("%d", &n);
  while (((key & n) == ZERO) & (key >= ONE)) {
    number = number + 1;
    key = key >> ONE;
  }
  cout << MAX_B - number << endl;
  return 0;
}
