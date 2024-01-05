#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 19\n";
	write(1, quote, strlen(quote));
	return (1);
}
