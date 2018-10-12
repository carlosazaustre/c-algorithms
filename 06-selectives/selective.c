#include <stdio.h>

int main()
{
  // Example one: if
  int a = 0;
  int b = 10;

  if(a < b)
  {
    printf("Sure!, b is greater than a\n");
    printf("Cheers.\n");
  }

  // Example two: if-else
  int c = 10;
  int d = 0;

  if(d == 0)
  {
    printf("d is equal to 0.\n");
  }
  else 
    printf("A can be whatever\n");

  // Example three: if-else-if
  int e,f,g,h;

  printf("Enter the values for e, f, g and h: \n");
  scanf("%d", &e);
  scanf("%d", &f);
  scanf("%d", &g);
  scanf("%d", &h);

  if(e > f) 
  {
    printf("e is greater than f\n");
  }
  else if (e > g)
  {
    printf("e is grater than g\n");
  }
  else if (e > h)
  {
    printf("e is greater than h \n");
  }
  else
    printf("e is not greater than f, g or h");
}