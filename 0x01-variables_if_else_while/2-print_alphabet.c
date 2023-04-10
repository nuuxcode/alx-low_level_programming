#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
