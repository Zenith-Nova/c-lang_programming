#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 402;
	int b = 98;

	printf("a | b: %d\n", a | b);
	printf("a & b: %d\n", a & b);
	printf("a >> 2: %d\n", a >> 2);
	printf("a << 2: %d\n", a << 2);
	printf("~a: %d", ~a);

	return (0);
}
