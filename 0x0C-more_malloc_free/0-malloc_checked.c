#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *	exits with 98 if NULL
 * @b: size of memory to allocated
 * Return: Pointer to memory location
 */
void *malloc_checked(unsigned int b)
{
	void *loc;

	loc = malloc(b);
	if (loc == NULL)
		exit(98);

	return (loc);
}
