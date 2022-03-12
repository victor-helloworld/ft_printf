/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:04:08 by lorodrig          #+#    #+#             */
/*   Updated: 2021/12/09 15:04:20 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	char_cnt;

	char_cnt = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		char_cnt++;
	}
	if (nb > 9)
		char_cnt += ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
	char_cnt++;
	return (char_cnt);
}

int	ft_putnbrbase(unsigned long long nb, char *base)
{
	int	char_cnt;

	char_cnt = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		char_cnt++;
	}
	if (nb > (unsigned long long)ft_strlen(base) - 1)
		char_cnt += ft_putnbrbase(nb / ft_strlen(base), base);
	ft_putchar(base[nb % ft_strlen(base)]);
	char_cnt++;
	return (char_cnt);
}

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[i + j] != '\0')
		{
			if (base[i + j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (ft_putnbrbase(nbr, base));
}
