#include <stdio.h>


main()
{
  int i1, i2, i3, i4, smallest, largest;
  
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
  
  if(i1 > i2) {
    largest = i1;
    smallest = i2;
  } else {
    smallest = i1;
    largest = i2;
  }
  
  if(i3 > largest) {
    largest = i3;
  } else if ( i3 < smallest) {
    smallest = i3;
  }
  
  if(i4 > largest) {
    largest = i4;
  } else if ( i4 < smallest) {
    smallest = i4;
  }
  
  printf("The largest is %d\n", largest);
  printf("The smallest is %d\n", smallest);
}