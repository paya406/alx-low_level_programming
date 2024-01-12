#include <stdio.h>
/**
 * main - Prints number of arguments entered
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (success)
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
