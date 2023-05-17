#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "interpret.h"
#include "stack.h"

Stack *s = NULL;
int x = 0;
void interpreter_init() { s = new_stack(100); }

void interpret(const char *source)
{
  char op[10];
  char arg[10];

  sscanf(source, "%s%s", op, arg);
  printf("operação: %s\n", op);
  printf("argumento: %s\n", arg);

  if (strcmp(op, "push") == 0)
  {
    int value = atoi(arg);
    stack_push(s, value);
  }
  else if (strcmp(op, "add") == 0)
  {
    int arg1 = stack_pop(s);
    int arg2 = stack_pop(s);
    stack_push(s, arg1 + arg2);
  }
  else if (strcmp(op, "sub") == 0)
  {
    int arg1 = stack_pop(s);
    int arg2 = stack_pop(s);
    stack_push(s, arg1 - arg2);
  }
  else if (strcmp(op, "mul") == 0)
  {
    int arg1 = stack_pop(s);
    int arg2 = stack_pop(s);
    stack_push(s, arg1 * arg2);
  }
  else if (strcmp(op, "div") == 0)
  {
    int arg1 = stack_pop(s);
    int arg2 = stack_pop(s);
    stack_push(s, arg1 / arg2);
  }
  else if (strcmp(op, "print") == 0)
  {
    int value = stack_pop(s);
    printf("%d", value);
  }
  else if (strcmp(op, "stack") == 0)
  {
    stack_print(s);
  }
  else if (strcmp(op, "pushx") == 0)
  {
    x = stack_pop(s);
  }
  else if (strcmp(op, "popx") == 0)
  {
    stack_push(s, x);
  }
}