/**
 * main - Entry point, causes an infinite loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n"); /* Print message */

	i = 0;

	/* Infinite loop starts here */
	while (i < 10)
	{
		/*putchar(i);*/
		/* This line should be commented out to avoid infinite loop */
		i++;
	}

	/*printf("Infinite loop avoided! \\o/\n");*/
	/* This line should be commented out to only print the incoming message */

	printf("Infinite loop incoming :(\n"); /* Print message again */
	return (0);
}
