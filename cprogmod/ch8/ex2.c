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
  
  printf("Digit:      ");
  for(i = 0; i < 10; i++) 
    printf("%4d", i);
  printf("\n");
    
  printf("Occurrences:");
  for(i = 0; i < 10; i++) 
    printf("%4d", digit_seen[i]); 
  printf("\n");
}