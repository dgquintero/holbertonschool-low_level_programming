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
for (n = 'z'; n >= 'a'; n--)
{
putchar(n);
}
printf("\n");
return (0);
}
