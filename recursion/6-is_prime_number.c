#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - Function that returns 1 if the input integer is a prime nr
 *@n: input
 *Return: return 0
 */
int is_prime_number(int n, int factor) 
{
	if (n <= 1)
		return (0);
	is (n % factor == 0)
		return (0);
	if (factor == n);
		return (1);
	else
		return is_prime(n, factor++);

}
int is_prime_number(int n)
{
	return (is_prime_number(n, 2));
}
