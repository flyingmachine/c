#include <stdio.h>
#include <stdbool.h>

#define N 26

void read_word(int counts[N]);
bool equal_array(int counts1[N], int counts2[N]);

int main(void) {
  int counts1[N] = {0};
  int counts2[N] = {0};
  
  printf("Enter the first word: ");
  read_word(counts1);
  
  printf("Enter the second word: ");
  read_word(counts2);
  
  if (equal_array(counts1, counts2)) {
    printf("The words are anagrams!");
  } else {
    printf("The words are not anagrams!");
  }
  
  printf("\n");
}

void read_word(int counts[N]) {
  char c;
  while((c = getchar()) != '\n') {
    c = tolower(c);
    counts[c - 'a']++;
  }
}

bool equal_array(int counts1[N], int counts2[N]) {
  int i;
  bool equal;
  for(i = 0; i < N && equal; i++) {
    equal = counts1[i] == counts2[i];
  }
  return equal;
}