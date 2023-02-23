#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char c;

char d;

c = 'a';
d = 'A';
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
