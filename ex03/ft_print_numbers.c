/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eordukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:08:19 by eordukha          #+#    #+#             */
/*   Updated: 2020/11/29 19:23:58 by eordukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_i = 0;
int g_number[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void	ft_print_numbers(void);

void	print(char c);

int		main(void)
{
	ft_print_numbers();
}

void	ft_print_numbers(void)
{
	while (g_i <= 11)
	{
		print(g_i);
		++g_i;
	}
}

void	print(char c)
{
	write(1, &g_number[c], sizeof(g_number[11]));
}
