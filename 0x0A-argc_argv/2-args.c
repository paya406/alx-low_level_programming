#include <stdio.h>
/**
 * main - Prints all arguments enterd
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 (success)
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
