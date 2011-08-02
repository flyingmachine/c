#include <stdio.h>

main(void)
{
  float amount = 0.0f, tax_rate = 5.0f;
  printf("Enter an amount:");
  scanf("%f", &amount);
  printf("With tax added: %.2f\n", amount + (amount * tax_rate / 100));
  return 0;
}