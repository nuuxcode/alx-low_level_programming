#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function
 * @array: desc
 * @size: desc
 * @value: desc
 *
 * Return: Return
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t y = 0;
	size_t middle = 0;
	size_t found = 0;
	size_t a = 0;
	int debug = 0;

	if (!array)
		return (-1);

	if (debug)
		printf("\n\n\n**************************\n\n\n");
	for (y = 0; found == 0; y++)
	{
		if (debug)
			printf("Before Middle:%ld Size:%ld y:%ld i:%ld\n", middle, size, y, i);
		for (i = 0 + a; i < size; i++)
		{
			if (debug)
				printf("--- im inside second loop\n");
			if (i == 0 + a)
				printf("Searching in array: %d", array[i]);
			else
				printf("%d", array[i]);
			if (size > (i + 1))
				printf(", ");
			else
				printf("\n");
		}
		if (size % 2 == 0)
			middle = (size / 2) - 1;
		else
			middle = (size / 2);

		if (1)
			printf("After Middle:%ld Size:%ld y:%ld i:%ld array[middle]:%d value:%d\n", middle, size, y, i, array[middle + a - 1], value);
		if (y == size - 2)
		{
			printf("im last number\n");
			if (value == array[size - 1])
				return (value);
			else
				return (-1);
		}
		if (value == array[middle + a - 1])
			return (middle + a - 1);
		if (value < array[middle + a - 1])
		{
			size = middle;
			printf("Left size=%ld\n", size);
		}
		if (value > array[middle + a - 1])
		{
			a = middle + y;
			printf("Right a =%ld\n", a);
		}
		if (debug)
			printf("End Middle:%ld Size:%ld y:%ld i:%ld\n", middle, size, y, i);
		if (debug)
			printf("------------\n");
		if (y == 7)
			return (9);
	}
	return (-1);
}
