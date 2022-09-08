#include <stdio.h>

/**
<<<<<<< HEAD
 * Main- entry point
 *
=======
 * Main-prints the size of various types on the computer
 *      it is compiled and run on
 * Description - prints the size of various variables.
>>>>>>> fa41e14850baa8737233212246fa62b1abc71316
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char:%lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of an int:%lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a float:%lu bytes(s)\n", (unsigned long) sizeof(f));
	return (0);
}
