#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num = 48;

while (num <= 57)
{
putchar(num);
num++;
}
num = 97;
while (num <= 102)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
