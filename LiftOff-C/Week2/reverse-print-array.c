#include <stdio.h>

int main() {
  char charArr[10];

   
    scanf("%s", &charArr);

    for (int i = 0; i < 5; i++)
    {
      printf("%c", charArr[i]);
    }
    
    
    return 0;
}