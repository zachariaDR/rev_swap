/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:51:03 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 18:54:44 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position_a(t_stack a, int elem)
{
	int	order;
	int	small_max;

	order = 1;
	if (get_max(&a) < elem)
		return (get_min(&a));
	while (a.top)
	{
		if (a.top->data > elem && order)
		{
			small_max = a.top->data;
			order = 0;
		}
		if (a.top->data > elem && a.top->data < small_max)
			small_max = a.top->data;
		a.top = a.top->bellow;
	}
	return (small_max);
}
