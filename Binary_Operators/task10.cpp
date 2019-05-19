#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const unsigned int ONE = 1;
  int n, i, j;
  scanf("%d %d %d", &n, &i, &j);
  i = ONE << i;
  j = ONE << j;
  if (((n | i) == (n | j)) | ((n & ~i) == (n & ~j))) {
    cout << n << endl;
  } else {
    if (((n & ~i) & n) == n) {
      n = n | i;
    } else {
      n = n & ~i;
    }
    if (((n & ~j) & n) == n) {
      n = n | j;
    } else {
      n = n & ~j;
    }
      cout << n << endl;
  }
  return 0;
}
