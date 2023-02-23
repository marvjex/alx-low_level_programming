#include <stdio.h>
/**
 * main - prints alphabets using putchar function
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
