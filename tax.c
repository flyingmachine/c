#include <stdio.h>

main(void)
{
  int amount = 0, tax_rate = 5;
  printf("Enter an amount:");
  scanf("%d", &amount);
  printf("With tax added: %d\n", amount + (amount * tax_rate / 100));
  return 0;
}