/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:57:16 by vcollazo          #+#    #+#             */
/*   Updated: 2022/03/09 04:24:14 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	select_case(va_list args, char selected_case)
{
	if (selected_case == 'c')
		ft_putchar(va_arg(args, int));
	else if (selected_case == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (selected_case == 'p')
	{
		ft_putstr("0x");
		return (ft_putnbr_base(va_arg(args, unsigned long int),"0123456789abcdef") + 2);
	}
	else if (selected_case == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (selected_case == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (selected_case == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (selected_case == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (selected_case == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (selected_case == '%')
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
			char_cnt += select_case(args, str[i + 1]);
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
