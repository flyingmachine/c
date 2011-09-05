#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define WORD_SIZE 20

bool get_word();

int main(void) {
  char smallest[WORD_SIZE], largest[WORD_SIZE];
  while(get_word(smallest, largest))
    ;
  
  printf("\n");
  printf("Smallest word: %s\n", smallest);
  printf("Largest word: %s\n", largest);
}

bool get_word(char *smallest, char *largest) {
  char word[WORD_SIZE];
  printf("Enter word: ");
  scanf("%s", word);
  
  if (strlen(smallest) == 0) {
    strcpy(smallest, word);
    strcpy(largest, word);    
  } else if (strcmp(word, smallest) < 0) {
    strcpy(smallest, word);
  } else if (strcmp(word, largest) > 0) {
    strcpy(largest, word);
  }
  
  return strlen(word) != 4;
}