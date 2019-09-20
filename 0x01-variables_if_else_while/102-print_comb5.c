#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstNum = 0, secondNum = 0, thirdNum = 0, fourthNum = 1;

while (secondNum <= 9)
{
putchar(firstNum + '0');
putchar(secondNum + '0');
putchar(' ');
putchar(thirdNum + '0');
putchar(fourthNum + '0');

if (fourthNum == 9)
{
if (thirdNum == 9)
{
if (secondNum == 8)
{
if (firstNum == 9)
secondNum = secondNum + 2;
else
{
fourthNum = 0;
thirdNum = firstNum + 1;
secondNum++;
}
}
else if (secondNum == 9)
{
secondNum = 0;
firstNum++;
thirdNum = firstNum;
fourthNum = 1;
}
else
{
thirdNum = firstNum;
secondNum++;
fourthNum = secondNum + 1;
}
}
else
{
fourthNum = 0;
thirdNum++;
}
}
else
fourthNum++;

if (secondNum < 10)
{
putchar(',');
putchar(' ');
}

}

putchar('\n');
return (0);
}
