#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num, num1;
for (num1 = 0; num1 < 10; num1++)
{
for (num = 0; num < 10; num++)
{

if ((num != num1) && (num > num1))
{
putchar(num1 + '0');
putchar(num + '0');

if ((num == 9) && (num1 == 8))
;
else
{
putchar(',');
putchar(' ');
}

}

}
}
putchar ('\n');
return (0);
}
