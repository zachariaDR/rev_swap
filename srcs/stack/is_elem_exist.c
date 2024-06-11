/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_elem_exist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:49:44 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 11:50:53 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_elem_exist(t_stack a, int elem)
{
	if (get_elem_index(a, elem) == -1)
		return (0);
	else
		return (1);
}
