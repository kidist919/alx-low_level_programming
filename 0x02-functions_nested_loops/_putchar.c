#include "main.h"
#include <unistd.h>
/**
 * main - writes the character c
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
