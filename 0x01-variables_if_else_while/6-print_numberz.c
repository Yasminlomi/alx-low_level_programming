#include<stdio.h>
/**
*main - Entery point
*Description: 'print number base'
*Return: always 0
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
