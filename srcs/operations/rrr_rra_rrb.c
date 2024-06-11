/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_rra_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:27 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:25:30 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr_rra_rrb(t_stack *a, t_stack *b, int flag)
{
	if (a->size <= 1 && b->size <= 1)
		return ;
	rra_reverse_rotate_a(a, true);
	rrb_reverse_rotate_b(b, true);
	if (!flag)
		ft_putstr("rrr\n");
}
