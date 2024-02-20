#include <stdio.h>
/**
 * main - cap
 *
 * Return: 0
**/

int main(void)
{
char abc;
char Abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
	putchar(abc);
}
for (Abc = 'A'; Abc <= 'Z'; Abc++)
{
	putchar(Abc);
}
putchar('\n');
return (0);


}
