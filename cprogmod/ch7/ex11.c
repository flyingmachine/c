#include <stdio.h>
#include <ctype.h>

main()
{ 
  char first_letter, last_name_letter;
  
  printf("Enter a first and last name: ");
  
  do {
    first_letter = getchar();
  } while(first_letter == ' ');
  
  while(getchar() != ' ')
    ;
  
  while(last_name_letter = getchar()) {
    if(last_name_letter == '\n') {
      break;
    } else if(last_name_letter != ' ') {
      putchar(last_name_letter);
    }
  }
  
  printf(", %c.\n", first_letter);
}