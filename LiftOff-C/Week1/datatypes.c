#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("%d\n", sizeof(char));
  printf("CHAR_MIN: %d, CHAR_MAX: %d\n\n", CHAR_MIN, CHAR_MAX);

  printf("%d\n", sizeof(unsigned char));
  printf("UCHAR_MIN: %d, UCHAR_MAX: %d\n\n", 0, UCHAR_MAX);

  printf("%d\n", sizeof(short int));
  printf("SHRT_MIN: %d, SHRT_MAX: %d\n\n", SHRT_MIN, SHRT_MAX);

  printf("%d\n", sizeof(unsigned short int));
  printf("SHRT_MIN: %d, SHRT_MAX: %d\n\n", 0, USHRT_MAX);

  printf("%d\n", sizeof(int));
  printf("INT_MIN: %d, INT_MAX: %d\n\n", INT_MIN, INT_MAX);

  printf("%d\n", sizeof(unsigned int));
  printf("%d\n", sizeof(unsigned));  // unsigned means unsigned int
  printf("CHAR_MIN: %d, CHAR_MAX: %d\n\n", 0, CHAR_MAX);

  printf("%d\n", sizeof(long));
  printf("LONG_MIN: %d, LONG_MAX: %d\n\n", LONG_MIN, LONG_MAX);

  printf("%d\n", sizeof(unsigned long));
  printf("LONG_MIN: %d, LONG_MAX: %d\n\n", 0, ULONG_MAX);

  printf("%d\n", sizeof(long long));
  printf("LLONG_MIN: %d, LLONG_MAX: %d\n\n", LLONG_MIN, LLONG_MAX);

  printf("%d\n", sizeof(unsigned long long));
  printf("LLONG_MIN: %d, LLONG_MAX: %d\n\n", 0, ULLONG_MAX);

  printf("%d\n", sizeof(float));
  printf("FLT_MIN: %d, FLT_MAX: %d\n\n", FLT_MIN, FLT_MAX);

  printf("%d\n", sizeof(double));
  printf("DBL_MIN: %d, DBL_MAX: %d\n\n", DBL_MIN, DBL_MAX);

  printf("%d\n", sizeof(long double));
  printf("LDBL_MIN: %d, LDBL_MAX: %d\n\n", LDBL_MIN, LDBL_MAX);
  return 0;
}