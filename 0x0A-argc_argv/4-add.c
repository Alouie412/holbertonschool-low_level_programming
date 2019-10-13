#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= '0') && (*argv[i] <= '9'))
				sum += atoi(argv[i]);

			else
			{
				printf("Error\n");
					return (1);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
