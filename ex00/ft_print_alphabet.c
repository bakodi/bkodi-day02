
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);

void ft_print_alphabet(void)
{
	char    letter = 'a';
	while   (letter < 'z')
	{
		ft_putchar(letter);
		letter++;
	}

   ft_putchar('\n');
}


