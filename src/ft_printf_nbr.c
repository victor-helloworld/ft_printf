/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <vcollazo@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:37:45 by victor            #+#    #+#             */
/*   Updated: 2022/03/16 19:24:36 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	char_count;

	char_count = 0;
	if (nbr == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
		char_count++;
	}
	if (nbr > 9)
		char_count += ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
	char_count++;
	return (char_count);
}

int	ft_putnbrbase(unsigned long long nb, char *base)
{
	int	char_count;

	char_count = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		char_count++;
	}
	if (nb > (unsigned long long)ft_strlen(base) - 1)
		char_count += ft_putnbrbase(nb / ft_strlen(base), base);
	ft_putchar(base[nb % ft_strlen(base)]);
	char_count++;
	return (char_count);
}

int	ft_putnbr_base(unsigned long int nbr, char *base)
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
