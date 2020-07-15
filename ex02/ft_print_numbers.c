/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:40:14 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/15 09:40:36 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar ( char c);


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
	
