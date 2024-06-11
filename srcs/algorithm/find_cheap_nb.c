/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheap_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:53:08 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/31 15:43:19 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_halat_khasa(t_stack a, t_stack b, int data, int pos)
{
	if (half(a, data) == 0 && cost_to_top_up(a, data) == cost_to_top_up(b, pos))
		return (cost_to_top_up(a, data));
	else if (half(a, data) == 0 && half(b, pos) == 1 && cost_to_top_down(a,
			data) == cost_to_top_down(b, pos))
		return (cost_to_top_down(a, data));
	else if (half(a, data) == 1 && cost_to_top_down(a,
			data) == cost_to_top_down(b, pos))
		return (cost_to_top_down(a, data));
	else if (half(a, data) == 1 && half(b, pos) == 0 && cost_to_top_up(a,
			data) == cost_to_top_up(b, pos))
		return (cost_to_top_up(a, data));
	else
		return (-1);
}

static int	lowest_cost(t_stack *a, t_stack *b, int data, int pos)
{
	if (ft_halat_khasa(*a, *b, data, pos) != -1)
		return (ft_halat_khasa(*a, *b, data, pos));
	if (half(*a, data) == 0 && half(*b, pos) == 0)
	{
		if (cost_to_top(*a, data) > cost_to_top(*b, pos))
			return (cost_to_top(*a, data));
		else
			return (cost_to_top(*b, pos));
	}
	else if (half(*a, data) == 1 && half(*b, pos) == 1)
	{
		if (cost_to_top(*a, data) > cost_to_top(*b, pos))
			return (cost_to_top(*a, data));
		else
			return (cost_to_top(*b, pos));
	}
	else
		return (cost_to_top(*a, data) + cost_to_top(*b, pos));
}

int	find_cheap_nb(t_stack *a, t_stack *b)
{
	t_node	*ta;
	int		cost[2];
	int		pos;
	int		nb;

	cost[0] = 0;
	cost[1] = a->size + b->size;
	ta = a->top;
	while (ta)
	{
		if (ta->data < get_min(b))
			pos = get_max(b);
		else
			pos = get_position_b(*b, ta->data);
		cost[0] = lowest_cost(a, b, ta->data, pos);
		if (cost[0] < cost[1])
		{
			cost[1] = cost[0];
			nb = ta->data;
		}
		if (cost[0] == 0)
			return (nb);
		ta = ta->bellow;
	}
	return (nb);
}
