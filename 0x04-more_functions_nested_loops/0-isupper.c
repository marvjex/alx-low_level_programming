#include "main.h"
/**
 * _isupper -> this function checks upper case alphabets
 * @c: an integer parameter
 * Return: something but success
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);

return (c >= 65 && c <= 90);
return (c >= 'A' && c <= 'Z');
}
