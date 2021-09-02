#include "main.h"
/**
 * print_numbers - prints 0 to 9
 * 
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
