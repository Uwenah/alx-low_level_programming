#include "main.h"
/**
 *  _isalpha - check for letter character @c: the character to be checked
 * Return: 1 if c a letter, otherwise 0.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
