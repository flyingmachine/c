#include <stdio.h>

main(void)
{
  float after_first, after_second, after_third;
  float loan, interest_rate, monthly_payment;
  
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  
  interest_rate = interest_rate / 100 / 12;
  
  after_first = loan - monthly_payment;
  after_first = after_first + loan * interest_rate;

  after_second = after_first - monthly_payment;
  after_second = after_second + after_first * interest_rate;

  after_third = after_second - monthly_payment;
  after_third = after_third + after_second * interest_rate;

  
  printf("Balance remaining after first payment: %.2f\n", after_first);
  printf("Balance remaining after second payment: %.2f\n", after_second);
  printf("Balance remaining after third payment: %.2f\n", after_third);
  return 0;
}