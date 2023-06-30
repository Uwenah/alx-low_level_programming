#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= '0' && n[i] <= '4')
n[i] = n[i] - 2;
i++;
}
return (n);
}
