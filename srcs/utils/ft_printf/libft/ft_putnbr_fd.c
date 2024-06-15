/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:01:28 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/11 02:28:02 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(int n)
{
	int	i;

	if (!n)
		return (1);
	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	else if (n < 0)
	{
		sign = ft_putchar_fd('-', fd);
		n = -n;
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
	return (ft_nbrlen(n) + sign);
}
