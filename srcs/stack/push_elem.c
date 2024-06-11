/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:35:32 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:35:34 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_elem(t_stack *stack, t_node *elem)
{
	if (!is_empty(stack))
	{
		elem->bellow = stack->top;
		stack->top->above = elem;
	}
	else
		stack->bottom = elem;
	stack->top = elem;
	stack->size++;
}
