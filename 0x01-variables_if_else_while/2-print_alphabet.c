#include <stdio.h>
/**
 * main - This program prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
