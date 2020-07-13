#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_print_combo(void);


void ft_print_digits(char a, char b , char c )
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	ft_putchar(',');
	ft_putchar(',');
}



void ft_print_combo(void)
{
	char a = '0';
	char b = '0';
	char c = '0';

	while (a <= '9')
	{
		while ( b <= '9')
		{
			while ( c <= '9')
            {
				ft_print_digits(a, b , c);
                c++
            }
            c = '0';
            b++;
        }
        b = '0';
        a++;
    }
}



