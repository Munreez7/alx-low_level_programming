/*
 * file: 101-quote.c
 * auth: Munreez7
 */
#include <unistd.h>
 /**
  * Main - entry point
  * Description - program that prints exactly and that piece of art is useful" 
  * - Dora Korpar, 2015-10-19, followed by a new line,
  * Return: Always 1 (Success)
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
