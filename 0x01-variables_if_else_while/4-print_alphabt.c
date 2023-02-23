#include <stdio.h>
/**
 * main - Entry point
 * Returns: 0 always (succeed)
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
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
