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
int n, d;
for (n = '0'; n <= '9'; n++)
{
for (d = 'a'; d <= 'f'; d++)
{
if (n != d && n < d)
{
putchar(n+'0');
if (n != 8 && d != 9)
{
putchar (d + '0');
}
if (n < 8 && m < 9)
{
putchar (',');
putchar(' ');
}
}
return (0);
}
