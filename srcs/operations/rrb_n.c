/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_n.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:56:08 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 19:13:31 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb_n(t_stack *b, int elem)
{
	if (!is_elem_exist(*b, elem))
		return ;
	while (b->top->data != elem)
		rrb_reverse_rotate_b(b, false);
}
