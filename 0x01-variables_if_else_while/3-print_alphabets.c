#include <stdio.h>

/**
 *  main - Prints alphabets in lowercase letters
 *  Return: Always 0.
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);

}
