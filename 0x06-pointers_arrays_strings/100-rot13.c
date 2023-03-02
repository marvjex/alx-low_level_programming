#include "main.h"
/**
  * rot13 - Encodes a string using rot13.
  * @s: The string to encode.
  *
  * Return: A pointer to the encoded string.
  */
char *rot13(char *s)
{
int i, j;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

i = 0;
while (s[i] != '\0')
{
j = 0;
while (in[j] != '\0')
{
if (s[i] == in[j])
{
s[i] = out[j];
break;
}
j++;
}
i++;
}

return (s);
}
