#include<stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_print_reverse_alphabet.(void);

void ft_print_reverse_alphabet(void)
{
	char letter = 'z';
	while (letter > 'a')
	{
		ft_putchar(letter);
		letter--;
	}
	ft_putchar( '\n');
	return (letter);
}
		





