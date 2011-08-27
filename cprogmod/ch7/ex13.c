#include <stdio.h>
#include <ctype.h>

main()
{ 
  int word_count = 0, current_word_length = 0;
  float avg;
  char ch;
  
  printf("Enter a sentence: ");
  
  while ((ch = getchar()) != '\n') {
    
    if (ch == ' ') {
      if (current_word_length > 0) {
        avg = (word_count * avg + current_word_length) / (++word_count);
        current_word_length = 0;
      }
    } else {
      current_word_length ++;
    }
  }
  
  avg = (word_count * avg + current_word_length) / (++word_count);
  
  printf("Average word length: %.2f\n", avg);
}