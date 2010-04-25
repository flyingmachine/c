#include <stdio.h>
int main (void) {
  float largest = 0, input = 0;
  do {
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input == 0) {
      printf("The largest number entered was: %g\n", largest);
      return 0;
    } else if (input > largest ){
      largest = input;
    }
  } while (input != 0);
}
