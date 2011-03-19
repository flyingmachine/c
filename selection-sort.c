#include <stdio.h>
#include <stdlib.h>

#define N 10
// Ask for a series of integers
// store in an array
// Sort by calling selection_sort, which
// searches the array for the largest element, then moves it to the last position in the array
// calls itself recursively to sort the first n-1 elements of the array

// TODO how to remove requirement to include letter?

int get_input();
void selection_sort(int a[], int length);

int main (void) {
  int input_length = 0;
  int a[N];
  int i;
  
  input_length = get_input(a);
  selection_sort(a, input_length);
  
  printf("Sorted: ");
  for(i = 0; i < input_length; i++)
    printf("%d ", a[i]);
  printf("\n");
  
  exit(0);
}

int get_input(int a[]) {
  int length = 0;
  int stop;
  printf("Enter up to %d integers, followed by a letter:\n", N);
  while(scanf("%d", &a[length])){
    length++;
  }
    
  return length;
}

void selection_sort(int a[], int length) {
  if(length == 1)
    return;
  
  int largest = 0;
  int largest_position = 0;
  int i;
  
  for(i = 0; i < length; i++) {
    if(a[i] > largest) {
      largest = a[i];
      largest_position = i;
    }
  }
  
  a[largest_position] = a[length - 1];
  a[length - 1] = largest;
  
  selection_sort(a, length - 1);
}