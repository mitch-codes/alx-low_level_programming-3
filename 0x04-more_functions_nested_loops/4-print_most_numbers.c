#include "main.h"
/**
 * print_most_numbers - prints numbers leaving 2 and 4
 * 
 * Description: prints 0-9 expect numbers 2 and 4
*/

void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');
}
