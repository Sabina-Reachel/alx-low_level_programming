#include "main.h"
#include <stdio.h>
/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: imput 1
 * @b: imput 2
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
