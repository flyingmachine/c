#include <stdio.h>


main()
{
  int to_reverse, chopped;

  printf("Enter a number: ");
  scanf("%d", &to_reverse);
  
  printf("Reversed: ");
  
  do {
    chopped = to_reverse % 10;
    to_reverse = to_reverse / 10;
    
    printf("%d", chopped);
    
  } while(to_reverse > 0);
  
  printf("\n");
}