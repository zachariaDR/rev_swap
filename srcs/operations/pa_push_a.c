/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:33:27 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:37:08 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_push_a(t_stack *a, t_stack *b, int flag)
{
	if (is_empty(b))
		return ;
	push_elem(a, new_elem(b->top->data));
	pop_elem(b);
	if (!flag)
		ft_putstr("pa\n");
}
