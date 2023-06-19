#include <stdio.h>

/**
 * main - A program that prints the alphabet in lower case, except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{

	if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
