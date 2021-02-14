#include <stdio.h>

int solve();

int main() {
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    solve();
  }
  
  return 0;
}

int solve(){
  char str[10];
  int count=0;
  scanf("%s", str);

  for(int i = 0; (i<10 && str[i]!='\0'); i++){
    if (str[i]=='4'){
      count++;
    }
  }
  printf("%d", count);

  return 0;
}

// int solve() {
//   int testNum;
//   int count = 0;
//   scanf("%d", &testNum);

//   while (testNum != 0) {
//     if (testNum % 10 == 4) {
//       count++;
//     }

//     testNum = testNum / 10;
//   }

//   printf("%d", count);
//   return 0;
// }

