#include <stdio.h>
/**
 * main - Prints all arguments enterd
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	puts("");
	return (0);
}