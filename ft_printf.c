/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:49:10 by mbrighi           #+#    #+#             */
/*   Updated: 2024/12/17 19:21:12 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checkfiletype(va_list argp, const char ptr, int *counter)
{
	if (ptr == 'c')
		*counter += ft_putchar(va_arg(argp, int));
	if (ptr == 's')
		*counter += ft_putstr(va_arg(argp, char *));
	if (ptr == 'd' || ptr == 'i')
		*counter += ft_putnbr(va_arg(argp, int));
	if (ptr == 'x')
		*counter += ft_hexa(va_arg(argp, int));
	if (ptr == 'X')
		*counter += ft_hexA(va_arg(argp, int));
}

int ft_printf(const char *ptr, ...)
{
	int		counter;
	char	*res;
	
	res = NULL;
	counter = 0;
	va_list argp;
	va_start(argp, ptr);
	while (*ptr)
	{
		if(*ptr == '%')
		{
			ptr++;
			ft_checkfiletype(argp, *ptr, &counter);
			ptr++;
		}
		else
		{
			ft_putchar(*ptr);
			ptr++;
			counter++;
		}
	}
	va_end(argp);
	return (counter);
}

int main (void)
{
	int h;
	
	h = 0;
	h = ft_printf("Stampa le seguenti robe %c %s %d %x %X il counter e' %d", 'A', "PORCODDIO", -286, 255, 255, h);
	return (0);
}