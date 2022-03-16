/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <vcollazo@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:37:45 by victor            #+#    #+#             */
/*   Updated: 2022/03/16 19:23:23 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	select_conversion(va_list args, char specifier);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_strlen(char *str);
int	ft_putnbr(int nb);
int	ft_putnbrbase(unsigned long long nb, char *base);
int	ft_putnbr_base(unsigned long int nbr, char *base);

#endif
