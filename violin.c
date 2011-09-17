#include <stdio.h>

#define NUM_POSITIONS 3
#define NUM_COMBINATIONS 6

void populate_position_combinations(int position_combinations[][NUM_POSITIONS]);
void populate_position_sequences(int *position_sequences[]);
void print_position_sequences(int *position_sequences[], int position_combinations[][NUM_POSITIONS]);

int main() {
  int *position_sequences[NUM_COMBINATIONS];
  int position_combinations[NUM_COMBINATIONS][NUM_POSITIONS];
  
  populate_position_combinations(position_combinations);
  populate_position_sequences(position_sequences);
  print_position_sequences(position_sequences, position_combinations);
}


void populate_position_combinations(int position_combinations[][NUM_POSITIONS]) {
  int i, j;
  for (i = 0; i < NUM_COMBINATIONS; i++) {
    for (j = 0; j < NUM_POSITIONS; j++) {
      position_combinations[i][j] = position_in_sequence(i, j);
    }
  }
}

int position_in_sequence(i, j) {
  int first_position_size = NUM_COMBINATIONS / NUM_POSITIONS;
  
  if (j = 0) {
    return i / first_position_size;
  }
  
  if (j = 1 && (first_position_size + i) % first_position_size)
}

void populate_position_sequences(int *position_sequences[]) {
  
}

void print_position_sequences(int *position_sequences[], int position_combinations[][NUM_POSITIONS]) {
  
}
