#include "functions.h"
/**
 * _isalpha - checks for alphabetic character.
 * Return: 1 if is a letter, lowercase or uppercase. 0 if otherwise.
*/
int _isalpha(int c)
{
	int c;

	if ((c >= 97 && c <= 122) || (c >= 65 <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
