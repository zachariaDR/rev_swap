/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_to_top_down.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:52:36 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 18:54:05 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_to_top_down(t_stack x, int elem)
{
	int	index;
	int	i;

	i = 0;
	index = get_elem_index(x, elem);
	if (!index)
		return (0);
	while (index++ < x.size)
		i++;
	return (i);
}
