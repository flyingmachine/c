#include <stdio.h>


main()
{
  int i1, i2, i3;
 
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &i1, &i2, &i3);
  
  printf("The reversal is: %d%d%d\n", i3, i2, i1);
}