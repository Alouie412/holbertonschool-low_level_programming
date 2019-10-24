#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/* ops[6][2] */
int (*get_op_func(char *s))(int a, int b)
{
    op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
  };
  int i;

  i = 0;
  while (i < 5)
    {
      printf("Value of i is %d. Now entering if statement.\n", i);
      if (ops[i].op == s)
	{
	  return (ops[i].f);
	}
      printf("No match found. Now incrementing.\n");
      i++;
    }

  return (NULL);
}
