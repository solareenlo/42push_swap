# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/29 00:52:57 by tayamamo          #+#    #+#              #
#    Updated: 2021/04/29 00:52:57 by tayamamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for push_swap, updated Thu Apr 29 00:52:57 JST 2021

SRC_CH := ft_check_dup.c ft_check_int.c ft_check_ope.c ft_cmp.c ft_display_stack.c ft_exit.c ft_run_ope.c ft_run_ope_rr.c ft_run_ope_rrr.c main.c
OBJ_CH := ft_check_dup.o ft_check_int.o ft_check_ope.o ft_cmp.o ft_display_stack.o ft_exit.o ft_run_ope.o ft_run_ope_rr.o ft_run_ope_rrr.o main.o

SRC_PS := ft_check_dup.c ft_check_int.c ft_cmp.c ft_deque_get_type4.c ft_deque_get_type5.c ft_dq_cmp_with_med.c ft_dq_copy.c ft_dq_dfs_a.c ft_dq_dfs_b.c ft_dq_free.c ft_dq_init.c ft_dq_sort.c ft_dq_sort_less_than_10.c ft_dq_sort_less_than_5.c ft_dq_sort_pa_ra.c ft_dq_sort_pa_ra_2.c ft_dq_sort_pa_ra_3.c ft_dq_sort_pa_ra_4.c ft_dq_sort_pa_ra_4_0.c ft_dq_sort_pa_ra_4_1.c ft_dq_sort_pa_ra_4_2.c ft_dq_sort_pa_ra_4_3.c ft_dq_sort_pa_ra_4_4.c ft_dq_sort_ra.c ft_dq_sort_ra_2.c ft_dq_sort_ra_3.c ft_dq_sort_ra_4.c ft_dq_sort_ra_4_0.c ft_dq_sort_ra_4_1.c ft_dq_sort_ra_4_2.c ft_dq_sort_ra_4_3.c ft_dq_sort_ra_4_4.c ft_dq_sort_rra.c ft_dq_sort_utils.c ft_exit.c ft_op_put.c ft_op_put_dq.c ft_op_run_dq.c ft_op_run_dq_pa.c ft_op_run_dq_pa_ra.c ft_op_run_dq_pb.c ft_op_run_dq_ra.c ft_op_run_dq_rb.c ft_op_run_dq_rra.c ft_op_run_dq_sa.c ft_op_run_dq_sb.c ft_op_run_dq_ss.c main.c
OBJ_PS := ft_check_dup.o ft_check_int.o ft_cmp.o ft_deque_get_type4.o ft_deque_get_type5.o ft_dq_cmp_with_med.o ft_dq_copy.o ft_dq_dfs_a.o ft_dq_dfs_b.o ft_dq_free.o ft_dq_init.o ft_dq_sort.o ft_dq_sort_less_than_10.o ft_dq_sort_less_than_5.o ft_dq_sort_pa_ra.o ft_dq_sort_pa_ra_2.o ft_dq_sort_pa_ra_3.o ft_dq_sort_pa_ra_4.o ft_dq_sort_pa_ra_4_0.o ft_dq_sort_pa_ra_4_1.o ft_dq_sort_pa_ra_4_2.o ft_dq_sort_pa_ra_4_3.o ft_dq_sort_pa_ra_4_4.o ft_dq_sort_ra.o ft_dq_sort_ra_2.o ft_dq_sort_ra_3.o ft_dq_sort_ra_4.o ft_dq_sort_ra_4_0.o ft_dq_sort_ra_4_1.o ft_dq_sort_ra_4_2.o ft_dq_sort_ra_4_3.o ft_dq_sort_ra_4_4.o ft_dq_sort_rra.o ft_dq_sort_utils.o ft_exit.o ft_op_put.o ft_op_put_dq.o ft_op_run_dq.o ft_op_run_dq_pa.o ft_op_run_dq_pa_ra.o ft_op_run_dq_pb.o ft_op_run_dq_ra.o ft_op_run_dq_rb.o ft_op_run_dq_rra.o ft_op_run_dq_sa.o ft_op_run_dq_sb.o ft_op_run_dq_ss.o main.o

HDR_CH := checker.h
HDR_PS := push_swap.h

# DO NOT ADD OR MODIFY ANY LINES ABOVE THIS -- run 'make source' to add files

NAME_CH := checker
NAME_PS := push_swap

CC := gcc
CFLAGS := -Wall -Wextra -Werror -g -fsanitize=address
RM := rm -fr

SRC_CH_DIR := src_checker
SRC_PS_DIR := src_push_swap
OBJ_CH_DIR := obj_checker
OBJ_PS_DIR := obj_push_swap
SRCS_CH := $(addprefix $(SRC_CH_DIR)/, $(SRC_CH))
OBJS_CH := $(addprefix $(OBJ_CH_DIR)/, $(OBJ_CH))
SRCS_PS := $(addprefix $(SRC_PS_DIR)/, $(SRC_PS))
OBJS_PS := $(addprefix $(OBJ_PS_DIR)/, $(OBJ_PS))

LIBFT_DIR := libft
LIBFT := $(LIBFT_DIR)/libft.a
LIBS := -Llibft -lft

.PHONY:	all clean fclean re source test bonus

all: $(NAME_CH) $(NAME_PS)

# Linking
$(NAME_CH): $(OBJS_CH) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $^

# Compiling
$(OBJ_CH_DIR)/%.o: $(SRC_CH_DIR)/%.c
	@mkdir -p $(OBJ_CH_DIR)
	$(CC) $(CFLAGS) -I $(LIBFT_DIR) -o $@ -c $<

# Linking
$(NAME_PS): $(OBJS_PS) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $^

# Compiling
$(OBJ_PS_DIR)/%.o: $(SRC_PS_DIR)/%.c
	@mkdir -p $(OBJ_PS_DIR)
	$(CC) $(CFLAGS) -I $(LIBFT_DIR) -o $@ -c $<

$(LIBFT):
	@make -C $(LIBFT_DIR)

clean:
	$(RM) Makefile.bak $(OBJ_PS_DIR) $(OBJ_CH_DIR)

fclean: clean
	$(RM) $(NAME_CH) $(NAME_PS)
	make fclean -C $(LIBFT_DIR)

re: fclean all

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
	@echo "# Makefile for push_swap, updated `date`" >> Makefile
	@echo '' >> Makefile
	@echo SRC_CH := `cd src_checker ; ls *.c` >> Makefile
	@echo OBJ_CH := `cd src_checker ; ls *.c | sed s/c$$/o/` >> Makefile
	@echo '' >> Makefile
	@echo SRC_PS := `cd src_push_swap ; ls *.c` >> Makefile
	@echo OBJ_PS := `cd src_push_swap ; ls *.c | sed s/c$$/o/` >> Makefile
	@echo '' >> Makefile
	@echo HDR_CH := `cd src_checker ; ls *.h` >> Makefile
	@echo HDR_PS := `cd src_push_swap ; ls *.h` >> Makefile
	@echo '' >> Makefile
	@sed -n -e '/^# DO NOT ADD OR MODIFY/,$$p' < Makefile.bak >> Makefile
