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

void	ft_is_negative(int n);

void	print(char c);

int		main(void)
{
	ft_is_negative(-2);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		print('P');
	}
	else
	{
		print('N');
	}
}

void	print(char c)
{
	write(1, &c, 1);
}
