/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int botai = n ^ m;
	unsigned int bob = 0;

	while (botai != 0)
	{
		bob += botai & 1;
		botai >>= 1;
	}

	return (bob);
}
