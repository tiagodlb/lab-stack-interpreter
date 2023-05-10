#include <stdio.h>

#include "stack.h"

struct stack {
  int top;
  int *values;
};

Stack* new_stack(int size){
  Stack* s = calloc(1, sizeof(Stack));
  s->values = calloc(size, sizeof(int));
  s->top = 0;
  return s;
}
void stack_push(Stack *s, int value){
  s->values[s->top++] = value;
  
}
int stack_pop(Stack *s){ 
  return s->values[--s->top];
}
void stack_print(Stack *s){
  printf("-----Stack-----\n");
  for (int i = 0; i < s->top; i++){
    printf("%d\n", s->values[i]);
  }
  printf("-----Stack-----\n");
}