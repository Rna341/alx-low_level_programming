#include "main.h"

/**
* print_array - a function that prints n elements of an array of integers,
* followed by a new line.
*
* @a: first integer.
* @n: second integer.
*
* Return: void.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
