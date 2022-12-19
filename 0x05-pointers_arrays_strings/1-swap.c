#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * first value to be provided for a
 * second value to be provided for b
 * int c is the swapped integer
 * Return: 0 (success)
 */

void swap_int(int *a, int *b);
{
	int c = *a;
	*a = *b;
	*b = c;
}
