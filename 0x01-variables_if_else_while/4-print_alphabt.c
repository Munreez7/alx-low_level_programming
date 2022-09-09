#include <stdio.h>
/**
 * main -entry point
 * description - Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
