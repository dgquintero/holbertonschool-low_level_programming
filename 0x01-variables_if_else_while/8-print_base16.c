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
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}
printf("\n");
return (0);
}
