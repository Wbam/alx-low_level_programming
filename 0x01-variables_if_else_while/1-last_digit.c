#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/** 

* main -prints a random number and state wether it is posetive, negative, or, zero.

* Return: Always 0. */



int main(void)

{

	int n;

	char last[] ="last digit of";



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("%s %d is %d and is," last, n, n%10)

	

	if (n % 10> 5)

		printf(" greater than 5\n", n ,l);

	else if(n % 10 == 0)

		printf(" 0\n", n ,l);

	else

		printf("less than 6 and not 0\n", n,l);



	return (0);

}