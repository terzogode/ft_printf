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
	if (ptr == 'p')
		*counter += ft_putptr(va_arg(argp, void *));
	if (ptr == 'u')
		*counter += ft_putnbr(va_arg(argp, unsigned int));
}

int ft_printf(const char *ptr, ...)
{
	int		counter;
	
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
		}
	}
	va_end(argp);
	return (counter);
}

int main (void)
{
	int		h;
	int		x;
	void	*ptr;

	h = 0;
	x = 42;
	ptr = &x;
	h = ft_printf("Stampa le seguenti robe %c\n", 'A');
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %s\n", "PORCODDIO");
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %d\n", -286);
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %x\n", 255);
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %X\n", 255);
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %p\n", ptr);
	ft_printf("Il counter è %d\n", h);
	printf("Stampa le seguenti robe %p\n", ptr);
	return (0);
}
