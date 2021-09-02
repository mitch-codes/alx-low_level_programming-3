#include "main.h"
/**
 * print_numbers - prints 0 to 9
 * @x: variable used
 * Return: Always 0
*/
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
