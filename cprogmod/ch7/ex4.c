#include <stdio.h>
#include <ctype.h>

main()
{
  char phone;
  
  printf("Enter phone number: ");
  
  while((phone = getchar()) != '\n') {
    phone = toupper(phone);
    
    if(phone >= 'A' && phone <= 'Z') {
      if(phone < 'D') {
        putchar('2');
      } else if (phone < 'G') {
        putchar('3');
      } else if (phone < 'J') {
        putchar('4');
      } else if (phone < 'M') {
        putchar('5');
      } else if (phone < 'P') {
        putchar('6');
      } else if (phone < 'T') {
        putchar('7');
      } else if (phone < 'W') {
        putchar('8');
      } else {
        putchar('9');
      }
    } else {
      putchar(phone);
    }
    
  }
  printf("\n");
}