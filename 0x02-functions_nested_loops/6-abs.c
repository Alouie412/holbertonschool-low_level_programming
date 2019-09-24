#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @num: Holds an integer
 * Return: Always 0.
 */
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
