/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:26:49 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/15 09:32:31 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_print_alphabet(void)
{
	char  letter;

	letter = 'a';
	while   (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}

   ft_putchar('\n');
}


