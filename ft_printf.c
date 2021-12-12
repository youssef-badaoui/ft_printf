/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:28:56 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/10 20:41:35 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	format_specifier(va_list(ptr), char frmt, int *num)
{
    	if (frmt == 'd')
		ft_putnbr(va_arg(ptr, int), num);
	if (frmt == 'c')
		ft_putchar(va_arg(ptr, int), num);
	if (frmt == 's')
		ft_putstr(va_arg(ptr, char *), num);
	if (frmt == 'p')
		ft_address(va_arg(ptr, unsigned long), num);
	if (frmt == 'i')
		ft_putnbr(va_arg(ptr, int), num);
	if (frmt == 'u')
		ft_putnbr(va_arg(ptr, unsigned int), num);
	if (frmt == 'x')
		ft_hex_low(va_arg(ptr, unsigned int), num);
	if (frmt == 'X')
		ft_hex_up(va_arg(ptr, unsigned int), num);
	if (frmt == '%')
		ft_putchar('%', num);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ptr;
	int	i;
	int	num;

	va_start(ptr, fmt);
	i = -1;
	num = 0;
	while (fmt[++i])
	{
		if (fmt[i] == '%')
		{
			format_specifier(ptr, fmt[i + 1], &num);
			i++;
		}
		else if (fmt[i] != '%')
			ft_putchar(fmt[i], &num);
	}
	va_end(ptr);
	return (num);
}

