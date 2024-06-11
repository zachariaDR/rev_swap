/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_reversly.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:30:19 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/11 15:30:43 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_reversly(t_stack stack)
{
	if (is_empty(&stack) || stack.size == 1)
		return (1);
	while (stack.bottom->above)
	{
		if (stack.bottom->data > stack.bottom->above->data)
			return (0);
		stack.bottom = stack.bottom->above;
	}
	return (1);
}