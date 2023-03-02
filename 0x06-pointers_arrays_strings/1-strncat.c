/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be used from src
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
