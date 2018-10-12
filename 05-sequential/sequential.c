#include <stdio.h>

#define K 9
#define M 2
float x;
float aux;
float f;

int main()
{
  printf("Enter x value: \n");
  scanf("%f", &x);

  aux = K * (x - M) * (x - M);
  f = aux / (1 + aux);

  printf("Result is %f\n", f);
}