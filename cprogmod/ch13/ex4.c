#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char **p = &argv[argc];
  
  while(--p != argv) {
    printf("%s ", *p);
  }
  
  printf("\n");
}