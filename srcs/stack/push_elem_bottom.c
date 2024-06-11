/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem_bottom.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:35:27 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:35:29 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_elem_bottom(t_stack *stack, t_node *elem)
{
	if (!is_empty(stack))
	{
		elem->above = stack->bottom;
		stack->bottom->bellow = elem;
	}
	else
		stack->top = elem;
	stack->bottom = elem;
	stack->size++;
}
