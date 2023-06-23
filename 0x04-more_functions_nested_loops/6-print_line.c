#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character_should be printed
 */

void print_line(int n)
{
if (n <= 0)
{
_punchar("\n")
}
else
{
int i;
for (i = 1 ; i <= n ; i++)
{
_punchar('_');
}
_punchar("\n");
}
}
