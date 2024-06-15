/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 02:42:02 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/15 14:05:37 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_elems_to_b(t_stack *a, t_stack *b, int *push, int *near)
{
	while (a->size > 3)
	{
		*push = find_cheap_nb(a, b);
		*near = get_position_b(*b, *push);
		do_chep_moves(a, b, *push, *near);
		pb_push_b(a, b, false);
	}
}

static void	push_elems_back_to_a(t_stack *a, t_stack *b, int *near)
{
	while (b->size > 0)
	{
		*near = get_position_a(*a, b->top->data);
		make_elem_top(a, *near);
		pa_push_a(a, b, false);
	}
}

void	turk_sort(t_stack *a, t_stack *b)
{
	int	push;
	int	near;

	if (is_sorted(*a))
		return ;
	pb_push_b(a, b, false);
	pb_push_b(a, b, false);
	if (is_sorted(*b))
		sb_swap_b(b, false);
	push_elems_to_b(a, b, &push, &near);
	sort_three(a);
	push_elems_back_to_a(a, b, &near);
	make_elem_top(a, get_min(a));
}
