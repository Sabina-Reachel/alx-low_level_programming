#include "main.h"

/**
 * _isalpha - a function that checks alphabet
 * @c: single letter input
 * Return: 1 if c is alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c <= 'z' && c <= 'Z')
		return (1);
	else
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}	
