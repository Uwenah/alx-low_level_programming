#include"main.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @s: pointing to strings params
 * Return: *S
 */
char *rot13(char *s)
{
int i;
int j;
char datal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == datal[j])
{
s[i] = datarot[j];
break;
}
}
}
return (s);
}
