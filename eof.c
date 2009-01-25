#include <stdio.h>

/* copy input to output, 1st version */
main()
{
  int c, d;
  
  printf("%d\n", EOF);
  
  while((c = getchar()) != EOF) {
    d = (c != EOF);
  }
  printf("%d\n", c != EOF);
  printf("%d\n", d);
}