#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - a-z in reversed order
* Return: Always 0 (success)
*/

int main(void)
{
char alp;
for (alp = 'z'; alp >= 'a'; alp--)
putchar(alp);
putchar('\n');
return (0);
}
