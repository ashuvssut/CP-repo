#include <stdio.h>

int solve();

int main() {
  char str[100];
  fgets(str, sizeof str, stdin);

  int hasEncounteredWhitespace = 0;
  int hasEncounteredChar = 0;

  int spaceCount = 0;

  for (int i = 0; (i<100 && str[i]!='\0'); i++){

    if(str[i]!=32 && str[i]!='\n'){
      hasEncounteredWhitespace = 0;
      hasEncounteredChar = 1;
    }
    else if(str[i]==32 && hasEncounteredWhitespace==0 && hasEncounteredChar>0){
      spaceCount++;

      hasEncounteredWhitespace++;
    }

  }

  if (hasEncounteredWhitespace==0)
    printf("%d", spaceCount + 1);
  else 
    printf("%d", spaceCount);
  
  return 0;
}
