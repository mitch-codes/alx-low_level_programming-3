#include "holberton.h"
/**
 * main - prints Holberton then a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	char school[8] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(school[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
