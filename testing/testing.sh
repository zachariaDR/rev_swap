# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    testing.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 16:37:01 by zadriouc          #+#    #+#              #
#    Updated: 2024/05/27 16:37:05 by zadriouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "Numbers : $(python testing/random_ints.py $@ > test && cat test) - \n\n\n $(./push_swap $(cat test) \
	| wc -l) Lines, and Checker is : $(./push_swap $(cat test) | ./testing/checker_Mac $(cat test))"; rm test

