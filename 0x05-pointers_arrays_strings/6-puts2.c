#include "main.h"
/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */

void puts2(char *str)
{
	int index;
	int len;

	while (len != '\0')
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
