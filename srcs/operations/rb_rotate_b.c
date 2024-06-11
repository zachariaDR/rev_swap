/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:33:44 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:27:40 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb_rotate_b(t_stack *b, int flag)
{
	if (is_empty(b) || b->size == 1)
		return ;
	push_elem_bottom(b, new_elem(b->top->data));
	pop_elem(b);
	if (!flag)
		ft_putstr("rb\n");
}
