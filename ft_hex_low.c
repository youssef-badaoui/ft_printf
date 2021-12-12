/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:48:15 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/10 18:50:20 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void ft_hex_low(unsigned long nb, int  *num)
{
	char *hex; 

	hex = "0123456789abcdef";
	if (nb > 15)
	{
		ft_hex_low(nb / 16, num);
		ft_hex_low(nb % 16, num);
	}
	else
		ft_putchar(hex[nb], num);
	}

