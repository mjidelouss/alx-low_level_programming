#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		char *ptr;
		long num = strtol(arg, &ptr, 10);

		printf("num = %ld\n", num);
		printf("ptr = %s\n", ptr);

		if (*ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
