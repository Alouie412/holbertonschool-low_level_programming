#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 97, newline = 10;

while (letter < 123)
{
putchar(letter);
letter++;
}
letter = 65;
while (letter < 91)
{
putchar(letter);
letter++;
}
putchar(newline);
return (0);
}
