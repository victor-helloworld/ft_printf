/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:58:33 by lorodrig          #+#    #+#             */
/*   Updated: 2021/12/09 15:04:07 by lorodrig         ###   ########.fr       */
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