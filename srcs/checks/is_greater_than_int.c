/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_greater_than_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:32:47 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/02 00:03:22 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_case(char *arg, char *c, int value)
{
	return (ft_atoi(arg) == value && ft_strcmp(arg, c));
}

static int	is_greater(char *arg)
{
	return (is_int(arg) && (check_case(arg, "-1", -1) || check_case(arg, "0",
				0)));
}

int	is_greater_than_int(char **av, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (is_greater(av[i]))
			return (1);
	return (0);
}
