#include <stdio.h>
#include <math.h>

// Universal Gravitional constant
#define G 6.674 * pow(10, -11)
// Earth radius
#define R 6371 * 1000
// Earth mass
#define m1 5.974 * pow (10, 24)

float f, r, m2, d;

int main()
{
  printf("Enter mass value: \n");
  scanf("%f", &m2);

  printf("Enter the distance between masses: \n");
  scanf("%f", &d);

  // Distance between masses.
  r = (R + d * 1000) * (R + d * 1000);
  // Force
  f = (G * ((m1 - m2))) / r;

  printf("The gravitional force is: %f Newtons", f);
}