#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * Return: On Success 1. On error, 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
