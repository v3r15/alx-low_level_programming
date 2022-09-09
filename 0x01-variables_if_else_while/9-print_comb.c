#include <stdio.h>

/**
 * main - print all possible combinatins of a single-digit numbers.
 *
 * Description: print all possible combinations of a single-digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	
	i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}

