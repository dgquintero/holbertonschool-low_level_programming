#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Entry Point
 * Description: sum
 * @a: parametre to check
 * @b: parametre to check
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Entry Point
 * Description: difference
 * @a: parametre to check
 * @b: parametre to check
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Entry Point
 * Description: mult
 * @a: parametre to check
 * @b: parametre to check
 * Return: mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Entry Point
 * Description: div
 * @a: parametre to check
 * @b: parametre to check
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Entry Point
 * Description: mod
 * @a: parametre to check
 * @b: parametre to check
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
