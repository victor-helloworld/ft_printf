/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <vcollazo@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:37:45 by victor            #+#    #+#             */
/*   Updated: 2022/03/09 04:38:17 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		process(va_list args, char cur);
void	ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_strlen(char *str);
int		ft_putnbr(int nb);
int		ft_putnbrbase(unsigned long long nb, char *base);
int		ft_putnbr_base(unsigned long long nbr, char *base);

#endif