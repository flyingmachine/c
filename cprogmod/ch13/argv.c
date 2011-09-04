#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char **p;
  
  for (p = &argv[1]; *p != NULL; p++) {
    printf("%s\n", *p);
  }
}