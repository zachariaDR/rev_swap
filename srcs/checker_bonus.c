/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:22:46 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/11 15:26:49 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rotate_reverse(char *str, t_stack *a, t_stack *b)
{
	if (ft_strlen(str) == 3 && ft_strcmp(str, "ra\n") == 0)
		ra_rotate_a(a, true);
	else if (ft_strlen(str) == 3 && ft_strcmp(str, "rb\n") == 0)
		rb_rotate_b(b, true);
	else if (ft_strlen(str) == 4 && ft_strcmp(str, "rra\n") == 0)
		rra_reverse_rotate_a(a, true);
	else if (ft_strlen(str) == 4 && ft_strcmp (str, "rrb\n") == 0)
		rrb_reverse_rotate_b(b, true);
	else if (ft_strlen(str) == 3 && ft_strcmp (str, "rr\n") == 0)
		rr_ra_rb(a, b, true);
	else if (ft_strlen(str) == 4 && ft_strcmp (str, "rrr\n") == 0)
		rrr_rra_rrb(a, b, true);
	else if (ft_strlen(str) == 4 && ft_strcmp (str, "rev\n") == 0)
		reverse_stack(a, true);
	else
	{
		write(2, "Error\n", 6);
		free_stack(a);
		free_stack(b);
		free(str);
		exit(EXIT_FAILURE);
	}
}

void	do_operation(char *str, t_stack *a, t_stack *b)
{
	if (ft_strlen(str) == 3 && ft_strcmp(str, "pa\n") == 0)
		pa_push_a(a, b, true);
	else if (ft_strlen(str) == 3 && ft_strcmp(str, "pb\n") == 0)
		pb_push_b(a, b, true);
	else if (ft_strlen(str) == 3 && ft_strcmp(str, "sa\n") == 0)
		sa_swap_a(a, true);
	else if (ft_strlen(str) == 3 && ft_strcmp (str, "sb\n") == 0)
		sb_swap_b(b, true);
	else if (ft_strlen(str) == 3 && ft_strcmp (str, "ss\n") == 0)
		ss_sa_sb(a, b, true);
	else
		rotate_reverse(str, a, b);
}

void	read_from_stdin(t_stack *a, t_stack *b)
{
	char	*input;
	char	c;

	input = NULL;
	while (read(0, &c, 1))
	{
		if (c == '\n')
		{
			do_operation(input, a, b);
			free(input);
			input = ft_strdup("");
		}
		else
			input = ft_strjoin(input, c);
	}
	free(input);

}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char *str;
	
	if (ac == 1)
	{		
		exit (EXIT_FAILURE);
	}
	a = stack_init();
	b = stack_init();
	get_input(a, b, av + 1, ac - 1);
	str = get_next_line(0);
	while (*str)
	{
		do_operation(str, a, b);
		free(str);
		str = get_next_line(0);
	}
	free(str);
	// ft_print_stack(*a,'A');
	// ft_print_stack(*b,'B');
	if (is_sorted(*a) && is_empty(b))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	(free_stack(a), free_stack(b));
	return (0);
}
