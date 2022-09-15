#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -print positive negative or zerro
* 
* Description: using the main function
* this program prints "positive, negative or zero"
* Return: 0;
*/
int main(void)
{
int l;
int n;

srand(time(0));
n = ran() -RAND_MAX / 2;
n =rand() -RAND_MAX / 2;
l = n % 10;

if (l> 5)
{
	 printf("last digit of %d  is  %d and greater than 5\n" ,n ,1);
}
else if (1 == 0)
{
	printf("last digit of %d is %d and greater than 0\n", n,1);
}
else
{
	printf("last digit of %d is %d and less than 6 digit and not 0\n", n ,1);
}
return (0);
}
