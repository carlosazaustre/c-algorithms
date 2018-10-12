#include <stdio.h>

int main()
{
  int a, b, c, x, y, z;
  x = 2 + 10;
  y = 3 + 3 * 8;
  z = 3 / 3;
  a = 3 + (10 / 2);
  b = 5;
  c = 10;

  x = b > c;

  printf("El resultado 1 es: %d\n", x);
  printf("El resultado 2 es: %d\n", y);
  printf("El resultado 3 es: %d\n", z);
  printf("El resultado 4 es: %d\n", a);
}