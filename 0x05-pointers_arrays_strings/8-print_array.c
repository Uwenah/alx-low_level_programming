#include "main.h"
#include <stdio.h>
/**
 * print_array - fuction that print n of an array of integer
 * @a: arrays names
 * @n: numbers of arrays
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
