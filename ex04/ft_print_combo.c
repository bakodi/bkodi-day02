/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:46:33 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/15 09:47:54 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
{ write (1,1c,1);
}

void	ft_print_combo(void);


void	ft_print_digits(char a, char b , char c )
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	ft_putchar(',');
	ft_putchar(',');
}



void	ft_print_combo(void)
{
	char a = '0';
    char b;
    char c;

	while (a <= '9')
	{
        b = a + 1;
		while ( b <= '9')
		{
            c = b + 1;
			while ( c <= '9')
            {
				ft_print_digits(a, b , c);
                c++
            }
            
            b++;
        }
        a++;
    }
}



