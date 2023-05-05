#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint(NULL);
    printf("- %u\n", n);
    n = binary_to_uint("1");
    printf("- %u\n", n);
    n = binary_to_uint("101");
    printf("- %u\n", n);
    n = binary_to_uint("1e01");
    printf("- %u\n", n);
    n = binary_to_uint("1100010");
    printf("- %u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("- %u\n", n);
    return (0);
}

/*
get lentght of string
loop through number, and each time its 1 do 2**index

Write a function that converts a binary number to an unsigned int.

Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL

julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$

get lenght
lloop through string from backword
each 1
    u gonna do
        result += 2**index
            to do 2**index
                if (!expo)
                    res += 1;
                while (expo)
                    res *=2;

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = (num << 1) + (b[i] - 48);
	}
	return (num);
}


*/
