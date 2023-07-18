#include <stdio.h>
/**
 *array_iterator - executes a given functions as a prameter on each
 *elemnt of an array
 *@array: given array to iterate
 *@size: size of the array
 *@action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < (int) size)
		{
			action(array[i]);
			i++;
		}
	}
}
