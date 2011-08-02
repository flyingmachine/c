#include <stdio.h>

main(void)
{
  int x;
  printf("Enter x:");
  scanf("%d", &x);
  printf("Result: %d\n", 
    ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6
  );
  return 0;
}