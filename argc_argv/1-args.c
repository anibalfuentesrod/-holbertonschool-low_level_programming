#include <stdlib.h>
#include <stdio.h>
#include"main.h"
int main(int argc, char *argv[]);
/**
 * main - the namo of function
 *
 * @argc: argument count
 * @argv: the argument vector
 * Return: 0
**/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
