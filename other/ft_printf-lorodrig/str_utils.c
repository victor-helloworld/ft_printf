/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:01:45 by lorodrig          #+#    #+#             */
/*   Updated: 2021/12/09 15:04:09 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

int	ft_putstr(char *s)
{
	int	i;	

	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
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
