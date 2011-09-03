#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);

void stack_overflow();
void stack_underflow();
void no_match();

int main(void) {
  char ch, popped;
  
  printf("Enter parentheses and/or braces: ");
  
  while ((ch = getchar()) != '\n') {
    if (ch == '(' || ch == '{') {
      push(ch);
    } else {
      popped = pop();
      if (popped == '(' && ch != ')')
        no_match();
      else if (popped == '{' && ch != '}')
        no_match();
    }
  }
  
  if (!is_empty()) {
    no_match();
  } else {
    printf("Everything matches!\n");
  }
}

void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(char c) {
  if(is_full()) {
    stack_overflow();
  } else {
    contents[top++] = c;
  }
}

char pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    return contents[--top];
  }
}

void stack_underflow(void) {
  no_match();
}

void stack_overflow(void) {
  printf("Stack overflow, dude.\n");
  exit(0);
}

void no_match(void) {
  printf("No match!\n");
  exit(0);
}