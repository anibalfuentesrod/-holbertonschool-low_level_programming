#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - the name of function
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
**/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mult = i * j;

	printf("%d\n", mult);

	return (0);
}
