# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/29 00:53:11 by tayamamo          #+#    #+#              #
#    Updated: 2021/04/29 00:53:11 by tayamamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for libft, updated Thu Apr 29 00:53:11 JST 2021

SRC := ft_array_get_type5.c ft_array_get_type5_0.c ft_array_get_type5_0_0.c ft_array_get_type5_0_1.c ft_array_get_type5_0_2.c ft_array_get_type5_1.c ft_array_get_type5_2.c ft_array_get_type5_3.c ft_array_get_type5_4.c ft_array_get_type5_5.c ft_array_op1.c ft_array_op2.c ft_array_sort2.c ft_array_sort3.c ft_array_sort4.c ft_array_sort4_456.c ft_atoi.c ft_bzero.c ft_calloc.c ft_deque_is_sorted_back.c ft_deque_is_sorted_front.c ft_deque_op1.c ft_deque_op2.c ft_deque_op3.c ft_deque_op4.c ft_deque_op5.c ft_deque_op6.c ft_deque_sort2_front.c ft_deque_sort3_front.c ft_deque_sort4_front.c ft_ffs.c ft_ffsl.c ft_ffsll.c ft_fls.c ft_flsl.c ft_flsll.c ft_free_null.c ft_heapsort.c ft_insertionsort.c ft_intdup.c ft_isdigit.c ft_isspace.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_max.c ft_median3.c ft_median3_int.c ft_memmove.c ft_memset.c ft_mergesort.c ft_min.c ft_put_error.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_endl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_qsort_int.c ft_quicksort.c ft_quicksort2.c ft_split_free_int.c ft_stack_op1.c ft_stack_op2.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strjoin_free.c ft_strlen.c ft_strncmp.c ft_swap.c get_next_line.c main.c

OBJ := ft_array_get_type5.o ft_array_get_type5_0.o ft_array_get_type5_0_0.o ft_array_get_type5_0_1.o ft_array_get_type5_0_2.o ft_array_get_type5_1.o ft_array_get_type5_2.o ft_array_get_type5_3.o ft_array_get_type5_4.o ft_array_get_type5_5.o ft_array_op1.o ft_array_op2.o ft_array_sort2.o ft_array_sort3.o ft_array_sort4.o ft_array_sort4_456.o ft_atoi.o ft_bzero.o ft_calloc.o ft_deque_is_sorted_back.o ft_deque_is_sorted_front.o ft_deque_op1.o ft_deque_op2.o ft_deque_op3.o ft_deque_op4.o ft_deque_op5.o ft_deque_op6.o ft_deque_sort2_front.o ft_deque_sort3_front.o ft_deque_sort4_front.o ft_ffs.o ft_ffsl.o ft_ffsll.o ft_fls.o ft_flsl.o ft_flsll.o ft_free_null.o ft_heapsort.o ft_insertionsort.o ft_intdup.o ft_isdigit.o ft_isspace.o ft_lstadd_back.o ft_lstadd_front.o ft_lstclear.o ft_lstdelone.o ft_lstiter.o ft_lstlast.o ft_lstmap.o ft_lstnew.o ft_lstsize.o ft_max.o ft_median3.o ft_median3_int.o ft_memmove.o ft_memset.o ft_mergesort.o ft_min.o ft_put_error.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_endl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_qsort_int.o ft_quicksort.o ft_quicksort2.o ft_split_free_int.o ft_stack_op1.o ft_stack_op2.o ft_strchr.o ft_strdup.o ft_strjoin.o ft_strjoin_free.o ft_strlen.o ft_strncmp.o ft_swap.o get_next_line.o main.o

HDR := libft.h

# DO NOT ADD OR MODIFY ANY LINES ABOVE THIS -- run 'make source' to add files

NAME	:= libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -g -fsanitize=address
LIB		:= ar -rcs
RM		:= rm -fr

INCLUDE	:= .
OBJ_DIR := obj
OBJS := $(addprefix $(OBJ_DIR)/, $(OBJ))

.PHONY:	all clean fclean re bonus rebonus source

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $@ $^

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

bonus: $(NAME) $(OBJ_BONUS)
	$(LIB) $^

clean:
	$(RM) Makefile.bak $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

source:
	@mv Makefile Makefile.bak
	@echo "# **************************************************************************** #" > Makefile
	@echo "#                                                                              #" >> Makefile
	@echo "#                                                         :::      ::::::::    #" >> Makefile
	@echo "#    Makefile                                           :+:      :+:    :+:    #" >> Makefile
	@echo "#                                                     +:+ +:+         +:+      #" >> Makefile
	@echo "#    By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+         #" >> Makefile
	@echo "#                                                 +#+#+#+#+#+   +#+            #" >> Makefile
	@echo "#    Created: `date "+%Y/%m/%d %H:%M:%S"` by tayamamo          #+#    #+#              #" >> Makefile
	@echo "#    Updated: `date "+%Y/%m/%d %H:%M:%S"` by tayamamo         ###   ########.fr        #" >> Makefile
	@echo "#                                                                              #" >> Makefile
	@echo "# **************************************************************************** #" >> Makefile
	@echo '' >> Makefile
	@echo "# Makefile for libft, updated `date`" >> Makefile
	@echo '' >> Makefile
	@echo SRC := `ls *.c` >> Makefile
	@echo '' >> Makefile
	@echo OBJ := `ls *.c | sed s/c$$/o/` >> Makefile
	@echo '' >> Makefile
	@echo HDR := `ls *.h` >> Makefile
	@echo '' >> Makefile
	@sed -n -e '/^# DO NOT ADD OR MODIFY/,$$p' < Makefile.bak >> Makefile
