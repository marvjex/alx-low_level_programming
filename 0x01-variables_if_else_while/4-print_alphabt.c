#include <stdio.h>
/**
 * main - This is the entry point of the program
 * Returns: 0 (succeed)
 */
int main(void)
{
for (char c  = 'a'; c  <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
