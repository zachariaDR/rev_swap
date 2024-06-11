/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_n.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:54:39 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 19:12:56 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_n(t_stack *a, int elem)
{
	if (!is_elem_exist(*a, elem))
		return ;
	while (a->top->data != elem)
		rra_reverse_rotate_a(a, false);
}
