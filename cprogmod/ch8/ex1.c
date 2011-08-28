#include <stdio.h>

main()
{ 
  long input;
  int digit_seen[10] = {0};
  int i, digit;
  
  printf("Enter a number: ");
  scanf("%ld", &input);
  
  while (input > 0) {
    digit = input % 10;
    digit_seen[digit]++;
    input /= 10;
  }
  
  printf("Repeated digits: ");
  for(i = 0; i < 10; i++) {
    if(digit_seen[i] > 1) {
      printf(" %d", i);
    }
  }
  printf("\n");
}