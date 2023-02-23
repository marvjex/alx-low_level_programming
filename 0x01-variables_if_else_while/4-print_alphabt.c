#include <stdio.h>
/**
 * main - Entry point
 * A program that prints alphabets -q and -e
 * Returns: 0 always (succeed)
 */
int main(void)
{
char a;
char c;
for (a = 'a'; a <= 'z'; c++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
}
putchar('\n');
return (0);
}
