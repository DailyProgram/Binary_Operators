#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int n, rez = 2;
  scanf("%d", &n);
  rez=rez << n-1;
  printf("%d\n", rez);
  return 0;
}
