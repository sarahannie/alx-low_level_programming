#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - all in base 16
* Return: Always 0 (success)
*/

int main(void)
{
char alp;
int num;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (alp = 'a'; alp <= 'f'; alp++)
putchar(alp);
putchar('\n');
return (0);
}
