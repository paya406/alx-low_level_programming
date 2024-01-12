#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, product = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		product *= atoi(argv[i]);

		printf("%d", product);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
