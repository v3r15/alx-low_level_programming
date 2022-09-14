#include <stdio.h>
/**
** main - prints _putchar
** Return: 0 (Success)
*/

int main(void)
{
	char c[] = "-putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

