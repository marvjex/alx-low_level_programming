#include "main.h"
/**
  * _memcpy - Copies @n bytes from memory area @src to memory area @dest.
  *
  * @dest: A pointer to the memory area to copy the bytes to.
  * @src: A pointer to the memory area to copy the bytes from.
  * @n: The number of bytes to be copied.
  * Return: A pointer to the destination memory area @dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
