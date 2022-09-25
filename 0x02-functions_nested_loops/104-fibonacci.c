#include <stdio.h>
#define LARGEST 1000000000
/**
 * main - main block
 * Description: Finad and print the first 98 fib numbers
 * Numbers should be coma and space separated
 * Return: Always (0)
*/

int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / LARGEST;
	j2 = j % LARGEST;
	k1 = k / LARGEST;
	k2 = k % LARGEST;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / LARGEST));
		printf("%lu", k2 % LARGEST);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}

