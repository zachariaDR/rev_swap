/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:57:20 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 11:43:34 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack a, char c)
{
	t_node	*x;

	x = a.top;
	printf("\n----- %c ----\n", c);
	printf("index | data\n");
	printf("------------\n");
	if (is_empty(&a))
		printf("STACK EMPTY\n");
	while (x)
	{
		printf("  %d   |   %d\n", get_elem_index(a, x->data), x->data);
		x = x->bellow;
	}
	printf("------------\n");
}
