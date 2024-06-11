/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_all_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:32:54 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/02 00:01:16 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_all_integer(char **av, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (!is_int(av[i]))
			return (0);
	return (1);
}
