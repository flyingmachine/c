#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LENGTH 20

int main(void) {
  char word[MAX_WORD_LENGTH+2];
  int word_len;
  
  clear_line();
  for(;;) {
    word_len = read_word(word, MAX_WORD_LENGTH + 1);
    
    if (word_len == 0) {
      flush_line();
      return 0;
    }
    
    if (word_len > MAX_WORD_LENGTH)
      word[MAX_WORD_LENGTH] = '*';
    if (word_len + 1 > space_remaining()) {
      write_line();
      clear_line();;
    }
    
    add_word(word);
  }
}