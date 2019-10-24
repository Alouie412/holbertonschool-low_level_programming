#include "function_pointers.h"

/**
 * print_name - This function prints a name using function pointers
 * @name: String to be printed out
 * @f: Function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	ptr = f;
	ptr(name);
}
