#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
int len = 0;

while (*(s + len) != '\0')
len++;

return (len);
}

/**
 * compare_strings - compares two strings recursively
 * @s1: first string
 * @s2: second string
 * @i: current index
 * Return: 1 if strings are identical, 0 otherwise
 */
int compare_strings(char *s1, char *s2, int i)
{
if (i == _strlen(s1))
return (1);

if (*(s1 + i) != *(s2 + i))
return (0);

return (compare_strings(s1, s2, i + 1));
}

/**
 * wildcmp - compares two strings and returns 1 if they are identical,
 * otherwise returns 0. The second string may contain a wildcard character '*'
 * which can match any sequence of characters.
 * @s1: first string
 * @s2: second string
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);

if (*s1 == '\0')
return (0);

return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == '\0' || *s2 == '\0')
{
return (*s1 == *s2);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else
{
return (0);
}
}
