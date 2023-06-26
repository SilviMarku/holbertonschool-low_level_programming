#include "main.h"
#include <string.h>

/**
 * rev_string  - Write a function that reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int tmp,begin, count, end;

	count = 0;

	while (s [count] != '\0')
		len++;

	begin = 0;
	end = count - 1;

	while (begin < end)
	{
		tmp = s[begin];
		s[begin] = s[end];
	       s[end] = tmp
	 begin++;
	       end--;       
	}
	_putchar('\n');
}
