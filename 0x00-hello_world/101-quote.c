/*
 * file: 101-quote.c
 * auth: Munreez7
 */
#include <unistd.h>
 /**
  * Main-entry point
  * Description-program that prints exactly and that piece of art is useful"\n
  * Return: Always (1)(Success)
  */
	int main(void)
	{ /*outline what is to be printed*/
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
