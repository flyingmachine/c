#include <stdio.h>

main(void)
{
  int i, a[2], b[2][2], *p, *q, **r;
  
  a[0] = 1;
  
  p = a;
  
  printf("Pointer as array: %d\n", *p);
  
  for(q = b[0]; p <= &b[2][2]; q++) {
    *q = 1;
  }
  
  printf("Pointer to multi dimensional array: %d\n", b[1][1]);
  
  r = &q;
  
  printf("Pointer to a pointer to multi dimensional array: %d\n", **r);
}