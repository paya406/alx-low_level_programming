#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of arguments followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		char *currentNumber = argv[i];

		int isDigit = 1;

		for (int j = 0; currentNumber[j] != '\0'; j++)
		{
			if (currentNumber[j] < '0' || currentNumber[j] > '9')
			{
				isDigit = 0;
				break;
			}
		}

		if (!isDigit)
		{
			printf("Error\n");
			return (1);
		}


		sum += atoi(currentNumber);
	}


	printf("%d\n", sum);

	return (0);
}
