/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 23:19:59 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/08 09:12:54 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	*ft_strjoin(char *s1, char c)
{
	char	*output;
	int		i;
	int		j;
	int 	a;

	a = 0;

	if (!s1)
	{
		s1 = ft_strdup("");
		a = 1;
	}
	output = (char *) malloc((ft_strlen(s1) + 2) * sizeof(char));
	if (!output)
		return (0);
	i = 0;
	j = 0;
	while (s1[j])
		output[i++] = s1[j++];
	output[i++] = c;
	output[i] = 0;
	if (a == 1)
		free(s1);
	return (output);
}
