#include <stdio.h>

int main() {
  int integersArr[10];

  for(int i=0; i<5; i++){
    scanf("%d", &integersArr[i]);
  }

  for (int i = 4; i >= 0; i--) {
    printf("%d ", integersArr[i]);
  }
}