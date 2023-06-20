#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (n < 103)
	{
		n = 97;
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
