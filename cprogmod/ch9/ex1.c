#include <stdio.h>

#define N 10

void selection_sort(int a[], int upper_index);

int main(void) {
  int a[N] , i;
  
  printf("Enter %d numbers to be sorted: ", N);
  for(i = 0; i < N; i++)
    scanf("%d", &a[i]);
    
  selection_sort(a, N-1);
  
  printf("In sorted order: ");
  for(i = 0; i < N; i++)
    printf("%d ", a[i]);
    
  printf("\n");
}

void selection_sort(int a[], int upper_index) {
  if (upper_index == 0) return;
  
  int largest = a[0];
  int index_of_largest;
  int i;
  
  for (i = 0; i <= upper_index; i++) {
    if (a[i] > largest) {
      largest = a[i];
      index_of_largest = i;
    }
  }
  
  a[index_of_largest] = a[upper_index];
  a[upper_index] = largest;
  
  selection_sort(a, upper_index - 1);
}