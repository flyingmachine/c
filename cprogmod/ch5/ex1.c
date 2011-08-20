#include <stdio.h>


main()
{
  int input, digit_count;
 
  printf("Enter a three-digit number: ");
  scanf("%d", &input);
  
  if (input < 10)
    digit_count = 1;
  else if (input < 100)
    digit_count = 2;
  else
    digit_count = 3;
  
  printf("The number %d has %d digits.\n", input, digit_count);
}