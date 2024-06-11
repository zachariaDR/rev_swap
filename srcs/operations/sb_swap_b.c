/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:41 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/11 15:28:34 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb_swap_b(t_stack *b, int flag)
{
	if (is_empty(b) || b->size == 1)
		return ;
	ft_swap(&(b->top->data), &(b->top->bellow->data));
	if (!flag)
		ft_putstr("sb\n");
}
