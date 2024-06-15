/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:12:18 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/15 14:11:12 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
