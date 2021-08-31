#include "main.h"
/**
 * main - prints Holberton then a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	char _putchar[10] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(_putchar[i]);
	_putchar('\n');
	return (0);
}
