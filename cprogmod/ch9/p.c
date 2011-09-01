#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10
#define D '.'

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);
bool move(int x, int y);

int main(void) {
  int i = 1, *p;
  p = &i;
  
  printf("%d %d \n", i, *p);
  (*p)++;
  printf("%d %d \n", i, *p);
}