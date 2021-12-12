/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:08:36 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/09 13:21:55 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int n, int *num)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', num);
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, num);
	if (nb > 9)
	{
		ft_putnbr(nb / 10, num);
		ft_putnbr(nb % 10, num);
	}
}

