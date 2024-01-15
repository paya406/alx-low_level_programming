#include "main.h"
#include <stdlib.h>

/**
 * str_concat - joins one string to another
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new joint string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatstr;
	int len1, len2, i, j;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	concatstr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!concatstr)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatstr[i] = s1[i];

	for (j = 0; j < len2; j++)
		concatstr[i + j] = s2[j];

	concatstr[i + j] = '\0';

	return (concatstr);

}
