/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eordukha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:08:19 by eordukha          #+#    #+#             */
/*   Updated: 2020/11/29 19:23:58 by eordukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(char a, char b, char c, char d);

void	ft_print_comb2(void);

void	new(void);

char g_a = '0';
char g_b = '0';
char g_c = '0';
char g_d = '0';

int		main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char g_a, char g_b, char g_c, char g_d)
{
	ft_putchar(g_a);
	ft_putchar(g_b);
	ft_putchar(' ');
	ft_putchar(g_c);
	ft_putchar(g_d);
	if (!(g_a == '9' && g_b == '8' && g_c == '9' && g_d == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	new(void)
{
	g_a++;
	g_b = '0';
	g_c = g_a;
	g_d = g_b + 1;
}

void	ft_print_comb2(void)
{
	while (g_a <= '9')
	{
		while (g_b <= '9')
		{
			while (g_c <= '9')
			{
				while (g_d <= '9')
				{
					ft_print(g_a, g_b, g_c, g_d);
					g_d++;
					if (g_d == g_b)
					{
						g_d = g_b + 1;
					}
				}
				g_c++;
				g_d = '0';
			}
			g_b++;
			g_c = g_a;
			g_d = g_b + 1;
		}
		new();
	}
}
