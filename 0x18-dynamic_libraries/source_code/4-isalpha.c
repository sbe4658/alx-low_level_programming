#include "main.h"
/**
  * _isalpha - checks whether c is an alphabetic charecter
  * @c: character to check.
  * Return: 1 if c is alpha, otherwise 0
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
