#include "main.h"
/**
 * _memset - complete a memory block with a specific value
 * @s: starting address of memory
 * @b: end value
 * @n: number of bytes to change
 *
 * Return: array is changed with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
