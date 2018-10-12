// To compile:
// $ gcc -o sum sum.c
// To execute
// ./sum

#include <stdio.h>

#define constNumber 5

int main()
{
  int varNumber = 10;
  int result;

  result = varNumber + constNumber;
  printf("The result is: %d", result);
}