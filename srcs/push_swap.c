/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:21:53 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/12 20:53:20 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit(EXIT_FAILURE);
	a = stack_init();
	b = stack_init();
	get_input(a, b, av + 1, size_of_args(av + 1));
	// if (is_sorted_reversly(*a))
	// 	reverse_stack(a, false);
	if (a->size == 2 && !is_sorted(*a))
		sa_swap_a(a, false);
	else if (a->size == 3)
		sort_three(a);
	else
		turk_sort(a, b);
	// ft_print_stack(*a, 'A');
	// ft_print_stack(*b, 'B');
	// if (is_sorted(*a))
	// 	printf("OK\n");
	// else
	// 	printf("KO\n");
	free_stack(a);
	free_stack(b);
	exit(EXIT_SUCCESS);
	return (0);
}
