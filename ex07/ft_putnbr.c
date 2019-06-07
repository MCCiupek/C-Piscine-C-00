/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:05:33 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/06 20:23:13 by mciupek          ###   ########.fr       */
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
	ft_putchar(c3);
	ft_putchar(c4);
}

int		ft_posneg(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		return (-nb);
	}
	else
	{
		return (nb);
	}
}

void	ft_putnbr1(int nb)
{
	int r;

	r = nb % 10;
	if (nb / 10 != 0)
	{
		ft_putnbr1(nb / 10);
	}
	ft_putchar(r + 48);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar_multi('-', '2', '1', '4');
		ft_putchar_multi('7', '4', '8', '3');
		ft_putchar('6');
		ft_putchar('4');
		ft_putchar('8');
	}
	else
	{
		nb = ft_posneg(nb);
		ft_putnbr1(nb);
	}
}
