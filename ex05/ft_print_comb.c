/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eordukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:08:19 by eordukha          #+#    #+#             */
/*   Updated: 2020/11/29 19:23:58 by eordukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_putchar(char c);

char g_n1 = '0';
char g_n2 = '1';
char g_n3 = '2';
int g_i = 0;

int		main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	while (g_i < 999)
	{
		if (g_n1 < g_n2 && g_n2 < g_n3)
		{
			ft_putchar(g_n1);
			ft_putchar(g_n2);
			ft_putchar(g_n3);
			ft_putchar(',');
			ft_putchar(' ');
		}
		if (g_n3 == '9')
		{
			g_n3 = '0';
			g_n2++;
		}
		if (g_n2 == '9')
		{
			g_n2 = '0';
			g_n1++;
		}
		g_n3++;
		g_i++;
	}
	ft_putchar('\n');
}
