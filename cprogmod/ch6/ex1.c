#include <stdio.h>


main()
{
  float current = 0.0, largest = 0;
  
  do {
    printf("Enter a number: ");
    scanf("%f", &current);
    
    if(current > largest) {
      largest = current;
    }
    
  } while(current != 0.0);
  
  printf("The largest number entered was %.2f\n", largest);
}