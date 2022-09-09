#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - entry point
  *description - program will assign a random number to the variable n
  *return: 0
  */

/* function main - runs the program */
int main(void) /* int -integer */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) /* this is the condition */
{ /* if condition is true print the following */
	printf("%d is positive\n", n);
} /* if condition is true,print */
else if (n == 0)
{ /* if else if is true */
	printf("%d is zero\n", n);
} /*if else if is true, print */
else
{ /* if none of the above is true */
	printf("%d is negative\n", n);
}

	return (0);
}
