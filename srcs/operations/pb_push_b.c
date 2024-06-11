/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:33:32 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:37:51 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_push_b(t_stack *a, t_stack *b, int flag)
{
	if (is_empty(a))
		return ;
	push_elem(b, new_elem(a->top->data));
	pop_elem(a);
	if (!flag)
		ft_putstr("pb\n");
}
