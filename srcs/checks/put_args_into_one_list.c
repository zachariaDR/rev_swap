/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_args_into_one_list.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:19:35 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 12:56:55 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*remove_plus_sign_from_postive_nb(char *str)
{
	if (is_int(str) && str[0] == '+')
		return (ft_strdup(str + 1));
	return (ft_strdup(str));
}

char	**put_args_into_one_list(char **args)
{
	int		i;
	int		j;
	int		count;
	char	**mat;
	char	**list;

	i = -1;
	count = 0;
	list = (char **)malloc(sizeof(char *) * (size_of_args(args) + 1));
	if (!list)
		return (NULL);
	while (args[++i])
	{
		mat = ft_split(args[i], ' ');
		j = 0;
		while (mat[j])
		{
			list[count] = remove_plus_sign_from_postive_nb(mat[j++]);
			count++;
		}
		free_list(mat);
	}
	list[count] = NULL;
	return (list);
}
