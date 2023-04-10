#include "stdio.h"

/**
 * main - check the code.
 * Description
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum = 0;
	int i;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 0; i <= 47; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%ld", sum);
		if (i != 47)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
