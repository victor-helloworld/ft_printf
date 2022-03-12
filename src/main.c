/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <vcollazo@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 06:26:29 by victor            #+#    #+#             */
/*   Updated: 2022/03/12 19:37:22 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"
#include <stdio.h>

int 	main(void)
{
	char	*str1 = "Hello world";
	char	*str2 = "Hello 42";
	int		nbr;

	nbr = 10;	

///////////////////////////////////////////////////////////////////////////////
//		- Check %c, %s, %p, %d, i%, %u, %x, %X work fine				OK
//		- Check %% work fine											OK
//		- Check multiple conversion of the same type					OK
//		- Check multiple conversions with multiple parameters			OK
///////////////////////////////////////////////////////////////////////////////
	
	printf("///////////////////////////////////////////////////////////////\n");	
	ft_printf("ft_printf_ %%c: %c, %%s: %s, %%p: %p, %%d: %d\n", str1[0], str1, str1, nbr);
	printf("printf____ %%c: %c, %%s: %s, %%p: %p, %%d: %d\n", str1[0], str1, str1, nbr);
	
	ft_printf("ft_printf_ %%i: %i, %%u: %u, %%x: %x, %%X: %X\n", nbr, nbr, nbr, nbr);
	printf("printf____ %%i: %i, %%u: %u, %%x: %x, %%X: %X\n", nbr, nbr, nbr, nbr);
	
	ft_printf("ft_printf_ %%p[nbr]:\n", &nbr);
	ft_printf("ft_printf_ %%p((void*)-1): %p\n", (void *)-1);
	//printf("printf____ %%p[nbr]:\n", nbr);

	ft_printf("ft_printf_ %% works fine\n");
	ft_printf("Multiple conversion, str1: %s, str2: %s\n", str1, str2);
	
	return (0);
}
