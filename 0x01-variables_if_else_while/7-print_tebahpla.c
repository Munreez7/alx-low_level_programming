#include <stdio.h>
/**
 * main-entry point
 * Description-prints the lowercase alphabet in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)

		putchar(ch);

	putchar('\n');

	return (0);

}
