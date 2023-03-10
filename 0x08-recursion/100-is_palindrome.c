#include "main.h"

/**
  * _strlen_recursion - calculates the length of a string recursively
  * @s: the string to calculate the length of
  *
  * Return: the length of the string
  */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}

/**
  * check_palindrome - checks if a string is a palindrome recursively
  * @s: the string to check
  * @start: the starting index of the string
  * @end: the ending index of the string
  *
  * Return: 1 if the string is a palindrome, 0 otherwise
  */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] == s[end])
return (check_palindrome(s, start + 1, end - 1));

return (0);
}

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: the string to check
  *
  * Return: 1 if the string is a palindrome, 0 otherwise
  */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

return (check_palindrome(s, 0, len - 1));
}
