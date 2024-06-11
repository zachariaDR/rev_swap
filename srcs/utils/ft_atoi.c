/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:35:56 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/02 00:05:14 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_valid_number(size_t number, int sign)
{
	if (number > INT_MAX && sign > 0)
		return (-1);
	else if (number > INT_MIN_UD && sign < 0)
		return (0);
	return (1);
}

static int	ft_isspace(const char c)
{
	return (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\f'
		|| c == '\n');
}

static int	skip(const char *str, size_t *index)
{
	int		sgn;
	size_t	i;

	i = 0;
	sgn = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	*index = i;
	return (sgn);
}

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;
	size_t	i;

	res = 0;
	sign = skip(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
		if (check_valid_number(res, sign) <= 0)
			return (check_valid_number(res, sign));
	}
	return (res * sign);
}
