#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - a-z lower case
* Return: Always 0 (success) 
*/

int main(void)
{
char n;
for(n='a'; n <= 'z'; n++);
putchar(n);
for(n='A'; n <= 'Z'; n++);
putchar(n);
putchar('\n');
return (0);
}
