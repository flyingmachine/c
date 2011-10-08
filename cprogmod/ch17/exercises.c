#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *my_malloc(size_t size);
char *duplicate(char *str);

int main() {
  char *str;
  my_malloc(10);
  
  str = duplicate("A duplicate string.");
  puts(str);
}

void *my_malloc(size_t size) {
  void *p;
  
  p = malloc(size);
  if (p) {
    return p;
  } else {
    printf("Could not allocate bytes.\n");
  }
}

char *duplicate(char *str) {
  int size;
  char *p, *q;
  
  size = strlen(str) + 1;
  
  q = p = my_malloc(size * sizeof(char));
  
  while(*str) {
    *p = *str;
    p++;
    str++;
  }
  
  *p = '\0';
  
  return q;
}