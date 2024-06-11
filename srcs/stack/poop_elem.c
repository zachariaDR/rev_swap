/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poop_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:35:16 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:35:18 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	poop_elem(t_stack *stack)
{
	t_node	*tmp;

	if (!is_empty(stack))
	{
		tmp = stack->bottom;
		stack->bottom = stack->bottom->above;
		if (stack->size == 1)
		{
			stack->top = NULL;
			stack->bottom = NULL;
		}
		else
			stack->bottom->bellow = NULL;
		stack->size--;
		free(tmp);
	}
}
