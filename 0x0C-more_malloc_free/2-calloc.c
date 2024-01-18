#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to array
 * @nmemb: number of elements in array
 * @size: size of single element
 *
 * Return: pointer to array location in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *product;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	product = malloc(nmemb * size);
	if (product == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		product[i] = 0;

	return (product);
}
