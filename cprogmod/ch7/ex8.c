#include <stdio.h>
#include <ctype.h>

main()
{ 
  int hour, minute;
  char ampm;
  
  printf("Enter a 12-hour time: ");
  
  scanf("%d:%d %c", &hour, &minute, &ampm);
  
  
  if(toupper(ampm) == 'P') {
    if(hour != 12) {
      hour += 12;
    }
  } else {
    if(hour == 12) {
      hour = 0;
    }
  }
  
  printf("Equivalent 24-hour time: %02d:%02d\n", hour, minute);
}