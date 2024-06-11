/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:34 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/11 15:28:42 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_swap_a(t_stack *a, int flag)
{
	if (is_empty(a) || a->size == 1)
		return ;
	ft_swap(&(a->top->data), &(a->top->bellow->data));
	if (!flag)
		ft_putstr("sa\n");
}
