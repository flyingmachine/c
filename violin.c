#include <stdio.h>

#define NUM_POSITIONS 3
#define NUM_COMBINATIONS 6

void populate_position_combinations();
void populate_position_sequences(int *position_sequences[]);
void print_position_sequences(int *position_sequences[]);
void populate_next_position(int **p, int a[], int size);

int position_combinations[NUM_COMBINATIONS][NUM_POSITIONS];
int row[NUM_POSITIONS];

int main() {
  int *position_sequences[NUM_COMBINATIONS];
  
  populate_position_combinations();
  populate_position_sequences(position_sequences);
  print_position_sequences(position_sequences);
}


void populate_position_combinations() {
  int *p, i;
  int base[NUM_POSITIONS];
  
  p = position_combinations[0];
  for (i = 0; i < NUM_POSITIONS; i++) {
    base[i] = i;
  }
  
  populate_next_position(&p, base, NUM_POSITIONS);
}

void populate_next_position(int **p, int a[], int size) {  
  int i, j, k, next_size;
  next_size = size - 1;
  
  int b[next_size];
  
  // add next row to position_combinations
  if (size == 0) {
    for (i = 0; i < NUM_POSITIONS; i++) {
      **p = row[i];
      (*p)++;
    }
  }
  
  for (i = 0; i < size; i++) {
    row[NUM_POSITIONS - size] = a[i];
    
    k = 0;
    for (j = 0; j < size; j++) {
      if (j == i) {
        continue;
      }
      b[k++] = a[j];
    }
    
    populate_next_position(&*p, b, next_size);
  }
}

void populate_position_sequences(int *position_sequences[]) {
  
}

void print_position_sequences(int *position_sequences[]) {
  int i, j;
  for (i = 0; i < NUM_COMBINATIONS; i++) {
    for (j = 0; j < NUM_POSITIONS; j++)
      printf("%d ", position_combinations[i][j] + 1);
    printf("\n");
  }
}