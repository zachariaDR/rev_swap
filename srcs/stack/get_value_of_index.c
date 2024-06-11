/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value_of_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:51:53 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/11 14:52:58 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*get_value_of_index(t_stack a, int index)
{
	t_node	*x;

	x = a.top;
	while (x)
	{
		//printf("--> elem[%d] : %d \n", get_elem_index(a, x->data), x->data);
		if (get_elem_index(a, x->data) == index)
			return (x);
		x = x->bellow;
	}
	return (NULL);
}