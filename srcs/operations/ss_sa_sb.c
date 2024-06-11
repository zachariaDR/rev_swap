/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_sa_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:46 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:21:33 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss_sa_sb(t_stack *a, t_stack *b, int flag)
{
	sa_swap_a(a, true);
	sb_swap_b(b, true);
	if (!flag)
		ft_putstr("ss\n");
}
