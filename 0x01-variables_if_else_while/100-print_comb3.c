#include <stdio.h>
/**
 * main - main function
 * Return: always return 0
 */
int main(void)
{
	int i, j;

	i = '0';
	j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || (i == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = '0';
	}
	putchar('\n');
	return (0);
}
