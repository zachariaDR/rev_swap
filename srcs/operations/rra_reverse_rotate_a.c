/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_reverse_rotate_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:33:59 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:26:23 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_reverse_rotate_a(t_stack *a, int flag)
{
	if (is_empty(a) || a->size == 1)
		return ;
	push_elem(a, new_elem(a->bottom->data));
	poop_elem(a);
	if (!flag)
		ft_putstr("rra\n");
}
