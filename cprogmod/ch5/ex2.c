#include <stdio.h>


main()
{
  int hour24, min, hour12;
  
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour24, &min);
  
  if (hour24 > 11) {
    if (hour24 == 12)
      hour12 = 12;
    else
      hour12 = hour24 - 11;
    
    printf("Equivalent 12-hour time: %d:%d PM\n", hour12, min);
  } else {
    if (hour24 == 0)
      hour12 = 12;
    else
      hour12 = hour24;

    printf("Equivalent 12-hour time: %d:%d AM\n", hour12, min);
  }
}