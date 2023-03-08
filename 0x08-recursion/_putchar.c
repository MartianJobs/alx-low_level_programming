#include <unistd.h>

/**
 * main - Entry point
 * This is my _putchar.c
 * Return: _putchar
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
