/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:51:17 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/11 15:07:46 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_stack(t_stack *a, int flag)
{
	int	half;
	int	n;
	int	i;

	n = a->size;
	half = a->size / 2;
	i = -1;
	while (++i < half)
		ft_swap(&(get_value_of_index(*a, i)->data), &(get_value_of_index(*a, n - 1 - i))->data);
	if (!flag)
		ft_putstr("rev\n");
}