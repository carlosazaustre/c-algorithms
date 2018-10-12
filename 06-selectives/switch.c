#include <stdio.h>

int main()
{
  int x,a,b,c,d;
  printf("Enter a option: \n");
  scanf("%d", x);

  switch(x)
  {
    case 1:
    printf("Case 1\n");
    break;
    
    case 2:
    printf("Case 2\n");
    break;
    
    case 3:
    printf("Case 3\n");
    break;

    default:
    printf("Option not valid");
  }
}