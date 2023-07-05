#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of argumenst supplied to argv
 * @argv: vectorial array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	{
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
	}
}
