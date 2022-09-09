#include <stdio.h>
/**
 * main - entry point
 * Description - a program that prints all
 * single digit numbers of base 10 starting from 0
 * Return: always 0 (Successful)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);

}
