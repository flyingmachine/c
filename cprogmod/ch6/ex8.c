#include <stdio.h>


main()
{
  int days_in_month, day_of_week;
  int i;

  printf("Enter number of days in month: ");
  scanf("%d", &days_in_month);
  
  printf("Enter starting day of the week (1=Sun, 7=Sat):");
  scanf("%d", &day_of_week);
  
  for(i = 1; i < day_of_week; i++) {
    printf("   ");
  }
  
  for(i = 1; i <= days_in_month; i++) {
    printf("%3d", i);
    
    if(day_of_week == 7) {
      printf("\n");
      day_of_week = 1;
    } else {
      day_of_week++;
    }
  }
  printf("\n");
}