#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char i;
	char I;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (I = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
