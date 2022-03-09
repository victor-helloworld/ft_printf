/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:57:16 by vcollazo          #+#    #+#             */
/*   Updated: 2022/03/09 05:51:44 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	select_conversion(va_list args, char specifier)
{
	if (specifier == 'c')
		ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'p')
	{
		ft_putstr("0x");
		return (ft_putnbr_base(va_arg(args, unsigned long int),"0123456789abcdef") + 2);
	}
	else if (specifier == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (specifier == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (specifier == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (specifier == '%')
		ft_putchar('%');
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		char_cnt;
	va_list	args;

	i = 0;
	char_cnt = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			char_cnt += select_conversion(args, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			char_cnt++;
		}
		i++;
	}
	return (char_cnt);
}
