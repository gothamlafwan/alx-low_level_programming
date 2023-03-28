/**
 * swap_int - a function that swaps the values
 *             of two integers
 *
 * @a: input1
 * @b: input2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
