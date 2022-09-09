#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - entry point
  *description - program will assign a random number to the variable n
  *return: 0
  */

/* function main - runs the program */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) /* this is the condition */
{ /* if condition is true print the following */
	printf("is positive\n");
} /* if condition is true,print */
else if (n == 0)
{ /* if else if is true */
	printf("is zero\n");
} /*if else if is true, print */
else
{ /* if none of the above is true */
	printf("is negative\n");
}

	return (0);
}
