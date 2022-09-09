#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 * 
 * Description: print all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, k, m;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			m = j + 1;
			k = 1;
			while (k < 58)
			{
				while (m < 58)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(m);
					if (i < 57 || j < 57 || k < 57 || m < 57)
					{
						putchar(44);
						putchar(32);
					}
					m++;
				}
				m = 48;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}

