/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:19:08 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/06 21:43:58 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char u;
	char d;
	char c;

	c = 48;
	while (c <= 7 + 48)
	{
		d = c + 1;
		while (d <= 8 + 48)
		{
			u = d + 1;
			while (u <= 9 + 48)
			{
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
				if (c != 7 + 48 || d != 8 + 48 || u != 9 + 48)
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}
