/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_n.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:54:15 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 19:11:45 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb_n(t_stack *b, int elem)
{
	if (!is_elem_exist(*b, elem))
		return ;
	while (b->top->data != elem)
		rb_rotate_b(b, false);
}
