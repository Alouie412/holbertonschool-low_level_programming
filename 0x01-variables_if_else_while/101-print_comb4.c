#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0, altNum = 1, newNum = 2;

while (num < 8)
{
putchar(num + '0');
putchar(altNum + '0');
putchar(newNum + '0');

if (num != 7)
{
putchar(',');
putchar(' ');
}

if (newNum == 9)
{
if (altNum == 8)
{
newNum = num + 3;
altNum = num + 2;
num++;
}
else
{
newNum = altNum + 2;
altNum++;
}
}
else
newNum++;
}

putchar('\n');
return (0);
}
