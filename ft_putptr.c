#include "ft_printf.h"

int ft_hexp(unsigned long n)
{
    char    c;
    int     i;

    i = 0;
    if (n < 16)
    {
        if (n < 10)
            c = n + '0';
        else
            c = n - 10 + 'a';
        write(1, &c, 1);
        i++;
    }
    else
    {
        i += ft_hexp(n / 16);
        i += ft_hexp(n % 16);
    }
    return (i);
}

int ft_putptr(void *ptr)
{
    int count = 0;

    count += write(1, "0x", 2);
    count += ft_hexp((unsigned long)ptr);
    return (count);
}
