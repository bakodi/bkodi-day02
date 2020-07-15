/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakodi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:35:35 by bakodi            #+#    #+#             */
/*   Updated: 2020/07/15 09:38:15 by bakodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_print_reverse_alphabet(void)
{
    char  letter;

    letter = 'z';
    while   (letter >= 'a')
    {
        ft_putchar(letter);
        letter--;
    }

   ft_putchar('\n');
}
  ft_putchar('\n');
}





