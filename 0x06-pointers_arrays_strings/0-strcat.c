/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}

dest[i + j] = '\0';

return (dest);
}
