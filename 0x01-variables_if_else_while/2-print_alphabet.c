#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 97, endline = 10;

while (letter < 123)
{
putchar(letter);
letter++;
}
putchar(endline);
return (0);
}
