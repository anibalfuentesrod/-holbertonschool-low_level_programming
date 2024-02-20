#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - if else
 *
 * Return: 0
 *
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
 printf("is positive, %d \n");
}
else if (n == 0)
{
prinf("is zero", \n");
}
else
{
printf("is negative, %d \n");
}
return (0);
}
