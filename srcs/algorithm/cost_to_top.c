/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:52:02 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 18:54:15 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_to_top(t_stack x, int elem)
{
	int	index;
	int	i;

	i = 0;
	index = get_elem_index(x, elem);
	if (index <= x.size / 2)
		while (i < index)
			i++;
	else
		while (i < x.size - index)
			i++;
	return (i);
}
