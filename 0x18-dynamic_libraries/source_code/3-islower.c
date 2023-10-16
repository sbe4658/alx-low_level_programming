#include "main.h"
/**
  * _islower - checks wether c is a lowercase or uppercase charecter
  * @c: the charecter to be checked.
  *
  * Return: 1 if c is lowercase, otherwise 0.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
