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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Last digit of 45528266 is 6 */
	printf("Last digit of %d is %d ", n, n % 10);
	/*and is greater than 5*/
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	/*and is 0*/
	else if (n % 10 == 0)
		printf("and is 0\n");
	/*and is less than 6 and not 0*/
	else if (n % 10 < 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
