/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                         :+:      :+:  :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:05:46 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/11 18:57:41 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void 	ft_hexa_low(long nb, int *num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb > 15)
	{
		ft_hexa_low(nb / 16, num);
		ft_hexa_low(nb % 16, num);
	}
	else
		ft_putchar(hex[nb], num);
}

void	ft_address(unsigned long nb, int *num)
{
	ft_putstr("0X", num);
	ft_hexa_low(nb ,num);
}
