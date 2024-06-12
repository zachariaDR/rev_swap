
#include <unistd.h>
#include <stdio.h>

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putnbr_base(unsigned int nbr, char xX)
{
	unsigned int	base_len;
	char			*base;
	int				count;

    count = 0;
	base_len = 16;
	if (xX == 'x')
		base = "0123456789abcdef";
	if (xX == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= base_len)
    {
		count += ft_putnbr_base(nbr / base_len, xX);
	    count += ft_putnbr_base(nbr % base_len, xX);
    }
	else
	    count += ft_putchar_fd(base[nbr % base_len], 1);
	return (count);
}