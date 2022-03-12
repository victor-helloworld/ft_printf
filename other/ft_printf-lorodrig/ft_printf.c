/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:57:16 by lorodrig          #+#    #+#             */
/*   Updated: 2021/12/09 15:04:06 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process(va_list args, char cur)
{
	if (cur == 'c')
		ft_putchar(va_arg(args, int));
	else if (cur == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (cur == 'p')
	{
		ft_putstr("0x");
		return (ft_putnbr_base(va_arg(args, unsigned long int),
				"0123456789abcdef") + 2);
	}
	else if (cur == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (cur == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (cur == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (cur == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (cur == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (cur == '%')
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
			char_cnt += process(args, str[i + 1]);
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
