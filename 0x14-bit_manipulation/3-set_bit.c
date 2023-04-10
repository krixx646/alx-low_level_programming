/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: Pointer to the number to modify
 * @index: Index of the bit to set to 1
 *
 * Return: 1 if successful, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index > (sizeof(unsigned long int) * 8) - 1)
        return (-1);

    *n |= (1UL << index);

    return (1);
}

