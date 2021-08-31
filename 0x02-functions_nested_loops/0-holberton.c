#include "main.h"
/**
 * main - prints Holberton then a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	char school[10] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(school[i]);
	_putchar('\n');
	return (0);
}
