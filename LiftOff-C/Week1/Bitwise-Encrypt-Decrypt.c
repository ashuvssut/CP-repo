// Write a program to encrypt and decrypt a string by adding and substracting 1 respectively to the ascii value of its characters
#include <stdio.h>

int main()
{
   int i, x;
   char str[100];

   printf("\nPlease enter a string:\t");
   gets(str);// ankit'\0'  

   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);

   switch(x)
   {
    case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 1; //the key for encryption is 1 that is added to ASCII value

      printf("\nEncrypted string: %s\n", str);  //bolju
      break;

    case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 1; //the key for encryption is 1 that is subtracted to ASCII value

      printf("\nDecrypted string: %s\n", str);
      break;

    default:
      printf("\nError\n");
   }
   return 0;
}