/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 02:42:02 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/12 20:58:30 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_elems_to_B(t_stack *a, t_stack *b, int *push, int *near)
{
	while (a->size > 3)
	{
		*push = find_cheap_nb(a, b);
		*near = get_position_b(*b, *push);
		do_chep_moves(a, b, *push, *near);
		pb_push_b(a, b, false);
	}
}

static void	push_elems_back_to_A(t_stack *a, t_stack *b, int *near)
{
	while (b->size > 0)
	{
		*near = get_position_a(*a, b->top->data);
		make_elem_top(a, *near);
		pa_push_a(a, b, false);
	}
}

static void	push_elems_to_B_and_bring_them_back(t_stack *a, t_stack *b)
{
	while (a->size > 0)
		pb_push_b(a, b, false);
	while (b->size > 0)
		(rrb_reverse_rotate_b(b, false), pa_push_a(a, b, false));
	return ;
}

void	turk_sort(t_stack *a, t_stack *b)
{
	int	push;
	int	near;

	if (is_sorted(*a))
		return ;
	if (is_sorted_reversly(*a))
		push_elems_to_B_and_bring_them_back(a, b);
	pb_push_b(a, b, false);
	pb_push_b(a, b, false);
	if (is_sorted(*b))
		sb_swap_b(b, false);
	push_elems_to_B(a, b, &push, &near);
	sort_three(a);
	push_elems_back_to_A(a, b, &near);
	make_elem_top(a, get_min(a));
}
