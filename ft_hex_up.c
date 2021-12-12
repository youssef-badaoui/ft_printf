/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:49:17 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/10 18:49:50 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_hex_up(unsigned long nb, int *num)
{
	char *hex;
 
	hex = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_hex_up(nb / 16, num);
		ft_hex_up(nb % 16, num);
	}
	else
		ft_putchar(hex[nb], num);
	}

