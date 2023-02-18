#include <stdio.h>
/**
 * main-program entry point.
 * Return:0 Success code end
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
