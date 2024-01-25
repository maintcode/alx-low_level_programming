#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */

int op_sub(int a, int b) {
	return (a - b);
}

int op_mul(int a, int b) {
    return a * b;
}

int op_div(int a, int b) {
    return a / b;
}

int op_mod(int a, int b) {
    return a % b;
}


/* Similar implementations for op_sub, op_mul, op_div, and op_mod follow... */
