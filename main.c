#include "ft_printf.h"

int	main(void)
{
	int		h;
	//int		x;
	//void	*ptr= NULL;
	//int		i = -2147483648;

	//h = 0;
	//x = 42;
	//ptr = &x;
	h = ft_printf(NULL);
	//x = printf(NULL);
	//printf("Il counter è %d\n", x);
	printf("%d\n", h);
/* 	h = ft_printf("Stampa le seguenti robe %s\n", "PORCODDIO");
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %d\n", -286);
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %x\n", INT_MIN);
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %X\n", LONG_MIN);
	ft_printf("Il counter è %d\n", h);
	h = ft_printf("Stampa le seguenti robe %p\n", ptr);
	ft_printf("Il counter è %d\n", h);
	printf("Stampa le seguenti robe %p\n", ptr); 
	//h = ft_printf("%p\n", ptr);
	ft_printf("Il counter è %d\n", h);
	//printf("%p", ptr);
	printf("Stampa le seguenti robe %x\n", INT_MIN);
	printf("Stampa le seguenti robe %lX\n", LONG_MIN);
	printf("Stampa le seguenti robe %p\n", ptr);
	printf("Stampa le seguenti robe %i\n", -2147483648); */

	return(0);
}

