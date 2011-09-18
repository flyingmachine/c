#include <stdio.h>

#define SIZE ((int) (sizeof(country_codes) / sizeof(country_codes[0])))

int main(void) {
  struct dialing_code {
    char *country;
    int code;
  }
  
  int input_code, i;
  
  const struct dialing_code country_codes[] = {
    {"Argentina", 54}, {"Bangladesh", 880},
    {"Brazil", 55}, {"Burma (Myanmar)", 95},
    {"China", 86}, {"Colombia", 57},
    {"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
    {"Ethiopia", 251}, {"France", 33}
  }

 
  printf("Enter dialing code: ");
  scanf("%d", &input_code);
  
  for (i = 0; i < SIZE; i++) {
    if ()
  }
}