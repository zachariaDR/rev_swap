# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 15:22:28 by zadriouc          #+#    #+#              #
#    Updated: 2024/06/11 15:22:30 by zadriouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Binary Name:
NAME		= 
PUSH_SWAP	= push_swap
CHECKER		= checker

#Compiling Variables
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

#ft_printf Variables:
LIBFTPRINTF		=	srcs/utils/ft_printf/libftprintf.a
LIBFTPRINTF_DIR	=	srcs/utils/ft_printf/

#Push_Swap Tools Variables:
STACK		= $(addprefix stack/, create_new_elem free_stack pop_elem poop_elem \
			  push_elem push_elem_bottom stack_init is_elem_exist ft_print_stack \
			  get_max get_min get_elem_index half is_empty is_sorted is_sorted_reversly\
			  get_value_of_index)
OPERATION	= $(addprefix operations/, pa_push_a pb_push_b ra_rotate_a \
				rb_rotate_b rr_ra_rb rra_reverse_rotate_a \
				rrb_reverse_rotate_b rrr_rra_rrb sa_swap_a sb_swap_b \
				ss_sa_sb ra_n rb_n rr_n rra_n rrb_n rrr_n reverse_stack)
OPERATION_B	= $(addprefix operations/, pa_push_a pb_push_b ra_rotate_a \
				rb_rotate_b rr_ra_rb rra_reverse_rotate_a \
				rrb_reverse_rotate_b rrr_rra_rrb sa_swap_a sb_swap_b \
				ss_sa_sb reverse_stack)
CHECKS		= $(addprefix checks/, get_input is_int is_all_integer is_duplicates size_of_args\
			  	is_greater_than_int put_error put_args_into_one_list)
UTILS		= $(addprefix utils/, ft_swap ft_atoi ft_strcmp ft_putstr ft_substr ft_split \
				ft_strlen ft_strdup ft_strjoin get_next_line_utils get_next_line)
ALGO		= $(addprefix algorithm/, turk_sort sort_three \
				cost_to_top cost_to_top_up cost_to_top_down do_chep_moves find_cheap_nb \
			   	make_elem_top get_position_a get_position_b)
FILES		= $(addprefix srcs/, push_swap $(STACK) $(OPERATION) $(UTILS) $(CHECKS) $(ALGO))
FILES_BONUS	= $(addprefix srcs/, checker_bonus $(STACK) $(OPERATION_B) $(UTILS) $(CHECKS))


SRC			= $(FILES:=.c)
OBJ			= $(FILES:=.o)
SRC_BONUS	= $(FILES_BONUS:=.c)
OBJ_BONUS	= $(FILES_BONUS:=.o)

HEADER		= $(addprefix includes/, push_swap.h)
HEADER2		= $(addprefix includes/, checker_bonus.h)

INCLUDES	= -I includes -I srcs/utils/ft_printf/

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m


all: $(LIBFTPRINTF) $(PUSH_SWAP) 

$(PUSH_SWAP):  $(OBJ) $(HEADER)
	@ $(MAKE) -C $(LIBFTPRINTF_DIR)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(PUSH_SWAP)... $(RESET)\n"
	@ $(CC) $(CFLAGS) $(OBJ) $(INCLUDES) -o $(PUSH_SWAP)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.c $(HEADER)
	@printf "$(CURSIVE)$(GRAY) 	- Making object file $(notdir $@) from source file $(notdir $<) ... $(RESET)\n"
	@ $(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@ $(MAKE) clean -C $(LIBFTPRINTF_DIR)
	@ $(RM) $(OBJ)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@ $(MAKE) fclean -C $(LIBFTPRINTF_DIR)
	@ $(RM) $(PUSH_SWAP)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(PUSH_SWAP)... $(RESET)\n"
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

$(LIBFTPRINTF): $(LIBFTPRINTF_DIR)
	@ $(MAKE) -C $(LIBFTPRINTF_DIR)

bonus: $(CHECKER) $(HEADER2)

$(CHECKER):	$(OBJ_BONUS) $(HEADER2)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(CHECKER)... $(RESET)\n"
	@$(CC) $(CFLAGS) $(OBJ_BONUS) $(INCLUDES) -o $(CHECKER)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean_bonus:
	@$(RM) $(OBJ_BONUS)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean_bonus: clean_bonus
	@$(RM) $(CHECKER)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(CHECKER)... $(RESET)\n"
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re_bonus: fclean_bonus bonus

re: fclean all

.PHONY: all clean fclean re bonus clean_bonus fclean_bonus
.SECONDARY: $(OBJ) $(OBJ_BONUS)