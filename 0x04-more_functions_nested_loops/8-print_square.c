#include "main.h"
/**
 * print_square - write a function that print square @size: size of squares
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}else
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
