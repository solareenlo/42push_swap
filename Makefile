# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 17:18:35 by tayamamo          #+#    #+#              #
#    Updated: 2021/04/19 17:18:35 by tayamamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for push_swap, updated Mon Apr 19 17:18:35 JST 2021

SRC_CH := ft_check_dup.c ft_check_int.c ft_check_ope.c ft_exit.c ft_run_ope_dq.c main.c
OBJ_CH := ft_check_dup.o ft_check_int.o ft_check_ope.o ft_exit.o ft_run_ope_dq.o main.o

SRC_PS := ft_check_dup.c ft_check_int.c ft_cmp.c ft_dq_cmp_with_med.c ft_dq_dfs_a.c ft_dq_free.c ft_dq_init.c ft_dq_sort.c ft_exit.c ft_op_put.c ft_op_put_dq.c ft_op_run_dq.c main.c
OBJ_PS := ft_check_dup.o ft_check_int.o ft_cmp.o ft_dq_cmp_with_med.o ft_dq_dfs_a.o ft_dq_free.o ft_dq_init.o ft_dq_sort.o ft_exit.o ft_op_put.o ft_op_put_dq.o ft_op_run_dq.o main.o

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
