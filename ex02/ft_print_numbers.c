#include <stdio.h>
#include <unistd.h>

void ft_putchar ( char c);
void ft_print_numbers(void);

void ft_print_numbers(void);
	char letter = '0';
	char letter2 = '8';
	

	void ft_print_numbers(void)
	{
		char number = '0';
		while ( number < 9)
		{
			ft_putchar(number);
			number++;
		}
		ft_putchar( 'n\');
		return (0);
	}
	
