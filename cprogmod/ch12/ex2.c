#include <stdio.h>
#include <stdbool.h>
#define SIZE 100

main()
{ 
  char ch;
  char letters[SIZE] = {0}, *end = letters, *start = letters;
  bool is_palindrome = true;
  
  printf("Enter a message: ");
  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);
    if (ch >= 'a' && ch <= 'z') {
      *end++ = ch;
    }
  }
  
  for(end--; end >= (end - ((end - start) / 2)); end--, start++) {
    if (*start != *end) {
      is_palindrome = false;
    }
  }
  
  if (is_palindrome) {
    printf("It's a palindrome.");
  } else {
    printf("It's not a palindrome.");
  }
  printf("\n");
}