#include "main.h"
/**
 *_abs-prints = display absolute value.
 *@a: target number to be executed.
 * Return:returns successful
 *
 */
int _abs(int a)
{
	int y = a;

	int absvalue;

	if (y < 0)
	{
		y = y * (-1);
	}
	absvalue = y;

	return (absvalue);
}
