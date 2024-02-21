#include <stdio.h>
/**
 * main - excluding q e
 *
 * Return: 0
 *
**/

int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
if (abc != 'q' && abc != 'e')
putchar(abc);

}
putchar('\n');
return (0);
}
