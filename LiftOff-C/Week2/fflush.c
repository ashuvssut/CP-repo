#include <stdio.h>

int main() {
  char character;
  int integer;



  scanf("%d", &integer);
  // fflush(stdin);
  scanf("%c", &character);


  printf("---integer: %d   |   ---character: %c", integer, character);
}