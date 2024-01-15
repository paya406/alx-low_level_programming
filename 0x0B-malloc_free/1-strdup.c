#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to allocated space in memory
 * @str: string to be copied
 *
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, j;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (!duplicate)
		return (NULL);

	for (j = 0; j < i; j++)
		duplicate[j] = str[j];

	duplicate[j] = '\0';
	return (duplicate);
}
