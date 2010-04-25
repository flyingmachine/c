#include <stdio.h>
int main (void) {
  int original_number, first_digit, second_digit;
  printf("Two digit number: ");
  scanf("%d", &original_number);
  
  first_digit = original_number % 10;
  second_digit = original_number / 10;
  
  printf("%d%d\n", first_digit, second_digit);
}
