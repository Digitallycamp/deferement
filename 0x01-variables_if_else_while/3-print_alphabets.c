#include <stdio.h>

/**
  * main -This is the  entry block
  * @void: The man has no argument
  * Return: 0
**/
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
