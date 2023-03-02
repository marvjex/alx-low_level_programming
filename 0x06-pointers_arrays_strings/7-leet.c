#include "main.h"
/**
  * leet - encodes a string into 1337
  * @s: the string to encode
  * Return: a pointer to the encoded string
  */
char *leet(char *s)
{
char *p = s;
char leet[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
int i, j;

while (*p)
{
i = (*p | 32) - 'a'; /* lowercase ASCII -> index */
j = 0;
while (j < 8)
{
if (i == j)
{
*p = leet[j];
break;

j++;
}
p++;
}
return (s);
}
