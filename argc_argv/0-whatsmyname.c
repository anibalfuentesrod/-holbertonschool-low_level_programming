#include <stdlib.h>
#include <stdio.h>
/**
 * main - the namo of function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0
**/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
