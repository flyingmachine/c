#include <stdio.h>
#define SIZE 100

main()
{ 
  char terminator, ch;
  char sentence[SIZE] = {0};
  int  i = 0, j = 0, terminating_index;
  
  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    if (ch == '.' || ch == '?' || ch == '!') {
      terminator = ch;
      terminating_index = i;
    } else {
      sentence[i] = ch;
    }
    i++;
  }
  
  printf("Reversal of sentence: ");
  
  for (i = terminating_index; i >= 0; i--) {
    if (sentence[i - 1] == ' ' || i == 0) {
      j = i;
      while (sentence[j] != ' ' && j <= terminating_index) {
        putchar(sentence[j]);
        j++;
      }
      
      if (i > 0) {
        putchar(' ');
      }
    }
  }
  
  printf("%c\n", terminator);
}