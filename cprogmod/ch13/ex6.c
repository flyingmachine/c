#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9
#define INPUT_SIZE 7

int main(int argc, char *argv[]) {
  char *planets[] = {
    "mercury",
    "venus",
    "earth",
    "mars",
    "jupiter",
    "saturn",
    "uranus",
    "neptune",
    "pluto"
  };
  
  char input[INPUT_SIZE + 1];
  
  int i, j, k;
  
  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
      strcpy(input, argv[i]);
      
      for (k = 0; k < INPUT_SIZE && input[k]; k++) {
        input[k] = tolower(input[k]);
      }
      
      input[++k] = '\0';
      
      if (strcmp(input, planets[j]) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
    
    if (j == NUM_PLANETS) {
      printf("%s is not a planet\n", argv[i]);
    }
  }
  
  return 0;
}