#include <stdio.h>

/*
 * main-Entry point
 *
 * Description: print all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (seconDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++seconDigit;

		}
		++firstDigit;
	}
	putchar('\n');

	return (0);
}
