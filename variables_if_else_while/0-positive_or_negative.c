#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - if else
 *
 * Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive");
}
else if (n == 0)
{
prinf("is zero");
}
else
{
printf("is negative \n");
}
return (0);
}
