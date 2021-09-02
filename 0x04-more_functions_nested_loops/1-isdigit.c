#include "main.h"
/**
 * _isdigit - returns 1 if c is a digit
 * @c: input value
 * 
 * Description: checks for a digit (0 through 9)
 * Return: Always 0
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
