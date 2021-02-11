#include <stdbool.h>
#include <stdio.h>

int main() {
  int a = 10, res1 = 0, res2 = 0;

  int x = 10;
  int y = 9;

  // (a != x) && (res1 = 100);
  // printf("%d\n", res1);

  (a != y) || (res2 = 20);
  
  printf("%d\n", res2);

  return 0;
}
