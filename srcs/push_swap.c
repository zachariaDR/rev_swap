/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:21:53 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/15 14:03:52 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	a = stack_init();
	b = stack_init();
	get_input(a, b, av + 1, size_of_args(av + 1));
	if (a->size == 2 && !is_sorted(*a))
		sa_swap_a(a, false);
	else if (a->size == 3)
		sort_three(a);
	else
		turk_sort(a, b);
	free_stack(a);
	free_stack(b);
	exit(EXIT_SUCCESS);
	return (0);
}
