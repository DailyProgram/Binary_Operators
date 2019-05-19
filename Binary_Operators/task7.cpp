#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const unsigned int ONE = 1;
  int n, i;
  scanf("%d %d", &n, &i);
  i = ONE << i;
  if (((n & ~i) & n) == n) {
    n = n | i;
  } else {n = n & ~i;}
  cout << n << endl;
  return 0;
}
