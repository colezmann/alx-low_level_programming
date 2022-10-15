#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i = '0';
	int j = i + 1;
	int k = j + 1;

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
