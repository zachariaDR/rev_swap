/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_n.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:53:46 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:19:30 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_n(t_stack *a, t_stack *b, int elem)
{
	if (!is_elem_exist(*a, elem))
		return ;
	while (a->top->data != elem)
		rr_ra_rb(a, b, false);
}
