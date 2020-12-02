/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eordukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:08:19 by eordukha          #+#    #+#             */
/*   Updated: 2020/11/29 19:23:58 by eordukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	print(char c);

int	g_i = 122;

int		main(void)
{
	ft_print_alphabet();
}

void	ft_print_alphabet(void)
{
	while (g_i >= 97)
	{
		print(g_i);
		--g_i;
	}
}

void	print(char c)
{
	write(1, &c, 1);
}
