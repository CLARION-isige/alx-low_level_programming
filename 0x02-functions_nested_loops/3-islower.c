# include "main.h"

/**
  * _islower - check lower case
  * @c: letter
  * Return: 0
  */

int _islower(int c)
{
	if (c >= 97 && c >= 122)
		return (1);
	else
		return (0);
}
