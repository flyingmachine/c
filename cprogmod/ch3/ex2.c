#include <stdio.h>


main()
{
  int month, day, year, item_number;
  float price;
  
  printf("Enter item number: ");
  scanf("%d", &item_number);
  
  printf("Enter unit price: ");
  scanf("%f", &price);
  
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  
  
  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", item_number, price, month, day, year);
}