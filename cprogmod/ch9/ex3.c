#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10
#define D '.'

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);
bool move(char walk[N][N], int *x, int *y);
bool can_move(char walk[N][N], int x, int y);

int main(void) {
  char walk[N][N];
  int i, j;
  for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
      walk[i][j] = D;
    }
  }
  
  generate_random_walk(walk);
  print_array(walk);
}

void generate_random_walk(char walk[N][N]) {
  int letter = 'A';
  int x = 0, y = 0;
  srand((unsigned) time(NULL));
  
  walk[x][y] = letter;
  letter++;
  
  for(; letter <= 'Z'; letter++) {
    if(move(walk, &x, &y)) {
      walk[x][y] = letter;
    } else {
      return;
    }
  }
}

bool move(char walk[N][N], int *x, int *y) {
  int direction;
  if (can_move(walk, *x, *y)) {
    for(;;) {
      direction = rand() % 4;
      // Up
      if (direction == 0) {
        if (*y == 0 || walk[*x][*y - 1] != D) {
          continue;
        } else {
          (*y)--;
          break;
        } 
      }
      
      if (direction == 1) {
        if (*x == N || walk[*x + 1][*y] != D) {
          continue;
        } else {
          (*x)++;
          break;
        } 
      }
      
      if (direction == 2) {
        if (*y == N || walk[*x][*y + 1] != D) {
          continue;
        } else {
          (*y)++;
          break;
        } 
      }
      
      if (direction == 3) {
        if (*x == 0 || walk[*x - 1][*y] != D) {
          continue;
        } else {
          (*x)--;
          break;
        } 
      } 
    }
    
    return true;
  } else {
    return false;
  }
}

bool can_move(char walk[N][N], int x, int y) {
  int failures = 0;
  if (x == 0) {
    failures++;
  } else if (walk[x - 1][y] != D) {
    failures++;
  }
  
  if (x == N) {
    failures++;
  } else if (walk[x + 1][y] != D) {
    failures++;
  }
  
  if (y == 0) {
    failures++;
  } else if (walk[x][y - 1] != D) {
    failures++;
  }
  
  if (y == N) {
    failures++;
  } else if (walk[x][y + 1] != D) {
    failures++;
  }

  return failures < 4;
}

void print_array(char walk[N][N]) {
  int i, j;
  for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
      printf("%c", walk[i][j]);
    }
    printf("\n");
  }
}