#include <stdio.h>

int main()
{
  int num = 5;
  float floatNum;
  char c;

  printf("Enter a character: ");
  scanf("%c", &c);
  printf("You entered the %c letter and the num value is %d\n", c, num);
}