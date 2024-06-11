/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_elem_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:58:14 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 18:57:07 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_elem_top(t_stack *a, int near)
{
	if (get_elem_index(*a, near))
	{
		if (half(*a, near))
			rra_n(a, near);
		else
			ra_n(a, near);
	}
}
