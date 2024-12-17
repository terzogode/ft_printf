#include "ft_printf.h"

int	ft_putunsnbr(unsigned int n)
{
	char	c;
	int		i;

	i = 0;
	c = '\0';
	if (n > 9)
		i += ft_putunsnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	i++;
	return (i);
}
