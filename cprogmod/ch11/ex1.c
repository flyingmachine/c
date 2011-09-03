#include <stdio.h>

main(void)
{
  int dollars, twenties, tens, fives, ones;
  printf("Enter a dollar amount:");
  scanf("%d", &dollars);
  
  twenties = dollars / 20;
  dollars -= 20 * twenties;
  
  tens = dollars / 10;
  dollars -= 10 * tens;
  
  fives = dollars / 5;
  dollars -= 5 * fives;
  
  ones = dollars;
  
  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf(" $5 bills: %d\n", fives);
  printf(" $1 bills: %d\n", ones);
  return 0;
}