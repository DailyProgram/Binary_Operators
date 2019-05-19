#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const unsigned int ONE = 1;
  unsigned int n, i, key = ONE;
  scanf("%d %d", &n, &i);
  for (int j = 0; j < i - ONE; j++) {
    key = (key << ONE) | ONE;
  }
  cout << key << endl;
  n = ((n >> ONE) & (~key)) | (n & key);
  cout << n << endl;
  return 0;
}
