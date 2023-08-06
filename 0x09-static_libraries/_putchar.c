#include "main.h"
#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on Success 1.
 * On orrror, -1 is returned, and erros is not appropriataly.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
