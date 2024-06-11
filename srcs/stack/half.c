/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:50:43 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 18:54:51 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	half(t_stack x, int elem)
{
	int	index;

	index = get_elem_index(x, elem);
	if (index <= x.size / 2)
		return (0);
	else
		return (1);
}
