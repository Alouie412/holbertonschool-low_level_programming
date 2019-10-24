#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "function_pointers.h"

int main(int argc, char *argv[])
{
  int num1, num2;
  int result;
  int i;

  for (i = 0; i < argc; i++)
    {
      printf("%s\n", argv[i]);
    }

  if (argc < 4)
    {
      printf("Error. Not enough arguments\n");
      exit(98);
    }

  if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
    {
      printf("Error. Cannot recognize operator\n");
      exit(99);
    }

  if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
    {
      printf("Error. Division by 0\n");
      exit(100);
    }

  num1 = atoi(argv[1]);
  num2 = atoi(argv[3]);

  printf("Test~\n");
  result = get_op_func(argv[2])(num1, num2);

  printf("%d\n", result);

  return (0);
}
