#include "holberton.h"
/**
 * _isdigit - returns 1 if c is a digit
 * @c: input value
 * 
 * Description: checks for a digit (0 through 9)
 * Return: Always 0
*/
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
