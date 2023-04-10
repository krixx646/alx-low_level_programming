/**
 * get_bit -get_bit - gets the value of a bit at a specified index in a decimal
 * number
 * @n:the decimal number to search for the bit
 * @index: index of the bit
 * Return:the value of the bit at the specified index, or -1 if an error
 * occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int indomie;

	if (index > 63)

		return (-1);

	indomie = (n >> index) & 1;

	return (indomie);
}
