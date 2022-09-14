#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers stardin from 1 and 2
 *
 * Return: Int
 */

int main(void)
{
	long i = 0;
	long j = 1;
	int n = 0;
	long fib;

	while (n < 50)
	{
		fib = j + i;
		if (n != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		i = j;
		j = fib;
		n += 1;
	}
	return (0);
}
