/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
char separators[] = " \t\n,;.!?\"(){}";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 || s[i - 1] == '\0' ||
strchr(separators, s[i - 1]) != NULL)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 'a' - 'A';
}
else
{
if (s[i] >= 'A' && s[i] <= 'Z')
s[i] += 'a' - 'A';
}
}

return (s);
}
