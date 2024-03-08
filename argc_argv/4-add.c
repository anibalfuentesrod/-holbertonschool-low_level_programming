#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - the name of function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
**/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i <= (argc - 1); i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[i]) >= 0)
			{
				sum += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
