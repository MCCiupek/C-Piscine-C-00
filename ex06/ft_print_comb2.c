/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:05:43 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/07 09:43:13 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multi(char c1, char c2, char c3, char c4)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	ft_putchar(c3);
	ft_putchar(c4);
	if (c1 != '9' || c2 != '8' || c3 != '9' || c4 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char x1;
	char x2;
	char y1;
	char y2;

	x1 = '/';
	while (++x1 <= '9')
	{
		x2 = '/';
		while (++x2 <= '9')
		{
			y1 = x1 - 1;
			while (++y1 <= '9')
			{
				y2 = x2;
				while (++y2 <= '9')
				{
					ft_putchar_multi(x1, x2, y1, y2);
				}
			}
		}
	}
}
