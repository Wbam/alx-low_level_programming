#include "main.h"
/**
* reverse_array - function that reverses content of array
* @a: array
* @n: number of elements
*/

void reverse_array(int *a, int n)

{
	int temp;
	int index;
	for (index = n - 1; index > n / 2; index--)
	{
		temp = a[n - 1 = index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
