#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: swap with b
 * @b: swap with a
 */
void swap_int(int *a, int *b)

{

	int m;

	m = *a;

	*a = *b;

	*b = m;
}
