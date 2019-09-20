#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstNum = 0, secondNum = 1;

for (firstNum; firstNum < 99; firstNum++)
{
for (secondNum; secondNum < 100; secondNum++)
{
putchar(firstNum / 10 + '0');
putchar(firstNum % 10 + '0');
putchar(' ');
putchar(secondNum / 10 + '0');
putchar(secondNum % 10 + '0');

if (firstNum == 98 && secondNum == 99)
{
firstNum++;
}
else
{
putchar(',');
putchar(' ');
}
}
secondNum = firstNum + 2;
}
putchar('\n');
return (0);
}
