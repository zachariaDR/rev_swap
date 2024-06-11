/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_n.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:37:13 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/11 15:29:02 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr_n(t_stack *a, t_stack *b, int elem)
{
	if (!is_elem_exist(*a, elem))
		return ;
	while (a->top->data != elem)
		rrr_rra_rrb(a, b, false);
}
