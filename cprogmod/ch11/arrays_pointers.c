#include <stdio.h>

main(void)
{
  int i, a[10], b[10][10], *p;
  
  a[0] = 1;
  
  p = a;
  
  printf("Pointer as array: %d\n", *p);
}