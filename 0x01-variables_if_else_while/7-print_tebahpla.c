#include <stdio.h>

/**
* * main - print the lowercase alphabet in reverse
* *
* * Description: print the lowercase alphabet in reverse
* *
* * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}

