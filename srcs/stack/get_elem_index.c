/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:35:16 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/11 15:35:18 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_elem_index(t_stack a, int elem)
{
	int	index;

	index = 0;
	if (!a.top)
		return (-1);
	while (a.top && a.top->data != elem)
	{
		a.top = a.top->bellow;
		index++;
	}
	if (index == a.size)
		return (-1);
	return (index);
}
