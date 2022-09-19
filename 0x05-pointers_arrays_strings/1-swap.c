#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
