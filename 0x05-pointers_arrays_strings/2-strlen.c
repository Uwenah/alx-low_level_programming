#include "main.h"
/**
 * _strlen - write functions that returns the length of strings
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
