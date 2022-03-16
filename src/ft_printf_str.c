/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <vcollazo@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:37:45 by victor            #+#    #+#             */
/*   Updated: 2022/03/16 17:52:06 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, sizeof(char)));
}

int	ft_putstr(char *s)
{
	int	i;	

	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (4);
	}
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	cntr;

	cntr = 0;
	while (*str != '\0')
	{
		str++;
		cntr++;
	}
	return (cntr);
}
