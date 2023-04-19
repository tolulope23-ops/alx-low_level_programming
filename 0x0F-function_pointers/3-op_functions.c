#include"3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of the numbers.
 *
 * @a: The first number.
 *
 * @b: The second number
 * Return: the the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number
 *
 * @b: The second number
 * Return: the the difference between  a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Returns the multiplcation
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the division of two numbers
 *
 * @a: the first number
 * @b: the second number
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the number of the division of the two numbers
 *
 * @a:The first number
 * @b: the second number
 * Return: the remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
