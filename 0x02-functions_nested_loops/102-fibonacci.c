#include "stdio.h"

/**
 * main - check the code.
 * Description
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int i;
	printf("%d, ", a);
	printf("%d, \n", b);
	for (i = 0; i < 50; i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d, ", sum);
	}

	return (0);
}
