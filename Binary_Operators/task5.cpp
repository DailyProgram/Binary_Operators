#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const unsigned int ONE = 1;
  int n, i;
  scanf("%d %d", &n, &i);
  n = n | (ONE << i);
  cout << n << endl;
  return 0;
}
