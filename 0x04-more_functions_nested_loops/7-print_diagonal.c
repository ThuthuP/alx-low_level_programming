#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_punchar("\n");
}
else
{
int i, j;
for (i = 0, j < n ; i++)
{
for (j = 0 ; j < n ; j++)
{
if (j == i)
_punchar('\\');
else if (j < i)
_punchar('');
}
_punchar("\n");
}
}
}
