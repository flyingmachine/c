#include <stdio.h>
#include <ctype.h>

main()
{ 
  float left_operand, right_operand;
  char operator;
  
  printf("Enter an expression: ");
  scanf("%f", &left_operand);
  
  while (1) {
    operator = getchar();
    
    if(operator == '\n') {
      break;
    }
    scanf("%f", &right_operand);

    switch (operator) {
      case '+':
        left_operand += right_operand;
        break;
      case '-':
        left_operand -= right_operand;
        break;
      case '*':
        left_operand *= right_operand;
        break;
      case '/':
        left_operand /= right_operand;
        break;
    }
  }
  
  printf("Value of expression: %.2f\n", left_operand);
}