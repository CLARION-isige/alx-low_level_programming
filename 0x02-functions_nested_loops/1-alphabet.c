#include "main.h"
/**
 *Description - print alphabet
 *print_alphabet - a to z
 * Return 0
 */

void print_alphabet(void)
{
	char  c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
