#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * create_array - creates an array and fills it with a given character
 * @size: size if array
 * @c: character to initialize the array with
 * Return: pointer to array or null if size is = 0
*/
char *create_array(unsigned int size, char c)
{
	char array;

	if(!size)
		return(NULL);

	array = malloc(sizeof(char) * size);

	if(!array)
		return(NULL);

	memset(array, c, size);
	return(array);
}
