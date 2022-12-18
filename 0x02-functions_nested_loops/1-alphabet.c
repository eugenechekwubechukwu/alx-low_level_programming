#include "main.h"

/**
 * print_alphabet - Using custom header to print alphabets
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
