/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_to_top_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:52:20 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 18:54:10 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_to_top_up(t_stack x, int elem)
{
	int	index;
	int	i;

	i = 0;
	index = get_elem_index(x, elem);
	while (i < index)
		i++;
	return (i);
}
