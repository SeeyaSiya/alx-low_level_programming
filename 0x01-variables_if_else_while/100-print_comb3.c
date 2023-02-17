
Skip to content
Pull requests
Issues
Codespaces
Marketplace
Explore
@SeeyaSiya
Rachamv /
alx-low_level_programming
Public

Fork your own copy of Rachamv/alx-low_level_programming

Code
Issues
Pull requests
Actions
Projects
Security

    Insights

alx-low_level_programming/0x01-variables_if_else_while/100-print_comb3.c
@Rachamv
Rachamv Update 100-print_comb3.c
Latest commit 23b629d Sep 10, 2022
History
1 contributor
31 lines (26 sloc) 511 Bytes
#include <stdio.h>

#include <ctype.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * positive,negative or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{

			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
Footer
© 2023 GitHub, Inc.
Footer navigation

    Terms
    Privacy
    Security
    Status
    Docs
    Contact GitHub
    Pricing
    API
    Training
    Blog
    About

alx-low_level_programming/100-print_comb3.c at main · Rachamv/alx-low_level_programming
