#include "main.h"
#include <unistd.h>

/**
 * _Putchar - it writes the character c to stdout
 * @c: is the character to print
 *
 * Return: 1 (success)
 * -1 is returned on error, the errno is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
