/**
 * main - Entry point of the program
 *
 * This function initializes an integer array `a` and a pointer `p`.
 * It then modifies the memory location pointed to by `p + 5` to the value 98.
 * Finally, it prints the value of `a[2]` to the console.
 *
 * Return: 0 on successful execution
 */

#include <stdio.h>
int main(void)
{
	int n;

	9int a[5];

	int *p;

	a[2] = 1024;

	p = &n;

	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;

	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
