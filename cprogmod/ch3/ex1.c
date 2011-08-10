#include <stdio.h>


main()
{
  int month, day, year;
  
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  
  printf("You entered the date %.4d%.2d%.2d\n", year, month, day);
}