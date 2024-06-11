/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ra_rb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:33:50 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:26:44 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_ra_rb(t_stack *a, t_stack *b, int flag)
{
	if (a->size <= 1 && b->size <= 1)
		return ;
	ra_rotate_a(a, true);
	rb_rotate_b(b, true);
	if (!flag)
		ft_putstr("rr\n");
}
