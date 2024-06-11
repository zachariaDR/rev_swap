/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:51:39 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 18:54:47 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position_b(t_stack b, int elem)
{
	int	order;
	int	big_min;

	order = 1;
	if (get_min(&b) > elem)
		return (get_max(&b));
	while (b.top)
	{
		if (b.top->data < elem && order)
		{
			big_min = b.top->data;
			order = 0;
		}
		if (b.top->data < elem && b.top->data > big_min)
			big_min = b.top->data;
		b.top = b.top->bellow;
	}
	return (big_min);
}
