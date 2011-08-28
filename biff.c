#include <stdio.h>
#include <ctype.h>

int main (void) {
  int ch, message[100] = {0}, i = 0, size = 0;
  
  printf("Enter message: ");
  while ((ch = getchar()) != '\n') {
    message[size] = ch;
    size++;
  }
  
  printf("In B1FF-speak: ");
  for(i = 0; i < size; i++) {
    message[i] = toupper(message[i]);
    switch (message[i]) {
      case 'A':
        printf("4");
        break;
      case 'B':
        printf("8");
        break;
      case 'E':
        printf("3");
        break;
      case 'I':
        printf("1");
        break;
      case 'O':
        printf("0");
        break;
      case 'S':
        printf("5");
        break;
      default:
        putchar(message[i]);
    }
  }
  printf("\n");
}
