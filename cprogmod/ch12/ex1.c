#include <stdio.h>
#define SIZE 100

main()
{ 
  char terminator, ch;
  char sentence[SIZE] = {0}, *p = sentence;
  
  printf("Enter a message: ");
  while ((ch = getchar()) != '\n') {
    *p++ = ch;
  }
  
  printf("Reversal is: ");
  while(p >= sentence) {
    putchar(*p--);
  }
  
  printf("\n");
}