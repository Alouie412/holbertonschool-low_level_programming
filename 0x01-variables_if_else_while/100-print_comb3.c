#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0, altNum = 1;

while (num < 9)
{
putchar(num + '0');
putchar(altNum + '0');

if (num != 8)
{
if (num != 9)
{
putchar(',');
putchar(' ');
}
}

if (altNum == 9)
{
altNum = num + 2;
num++;
}
else
altNum++;
}
putchar('\n');
return (0);
}
