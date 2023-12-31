#include "main.h"
/**
 *reverse_array -  function that reverses the content of an array of integers
 *@a: pointer to array
 *@n: n to be reversed
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

		i++;
		j--;
	}
}
