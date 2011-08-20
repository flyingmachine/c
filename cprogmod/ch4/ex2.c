#include <stdio.h>


main()
{
  int input, last_two;

  printf("Enter a three-digit number: ");
  scanf("%d", &input);
  
  last_two = input % 100;
  
  printf("The reversal is: %d%d%d\n", last_two % 10, last_two / 10, input / 100);
}