#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print a string using puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int d;
for (n = '0' ; n <= '9' ; n++)
{
for (d = '0' ; d <= '9' ; d++)
{
putchar(n);
putchar(d);
if (n == '9' && d == '9')
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
