#include <stdbool.h>
#include <stdio.h>
int main (void) {
  int repeat_count[10] = {0};
  int digit;
  int i;
  long n;
  
  printf("Enter a number: ");
  scanf("%ld", &n);
  
  while (n > 0) {
    digit = n % 10;
    repeat_count[digit]++;
    n /= 10;
  }
  
  printf("Repeated digits: ");
  for(i = 0; i < 10; i++)
    if (repeat_count[i])
      printf(" %d", i);
  printf("\n");
  return 0;
}
