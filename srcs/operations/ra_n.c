/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_n.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:54:01 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:19:09 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_n(t_stack *a, int elem)
{
	if (!is_elem_exist(*a, elem))
		return ;
	while (a->top->data != elem)
		ra_rotate_a(a, false);
}
