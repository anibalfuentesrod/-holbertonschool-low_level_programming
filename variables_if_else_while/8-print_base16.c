#include <stdio.h>
/**
 * main - making the eight
 *
 * Return: 0
**/
int main(void)
{
int num;
char abc;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
for (abc = 'a'; abc <= 'f'; abc++)
{
putchar(abc);
}
putchar('\n');
return (0);
}
