# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 15:54:05 by tayamamo          #+#    #+#              #
#    Updated: 2021/04/14 15:54:05 by tayamamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for push_swap, updated Wed Apr 14 15:54:05 JST 2021

SRC_CH := ft_check_dup.c ft_check_int.c ft_check_ope.c ft_exit.c ft_run_ope_dq.c main.c
OBJ_CH := ft_check_dup.o ft_check_int.o ft_check_ope.o ft_exit.o ft_run_ope_dq.o main.o

SRC_PS := ft_check_dup.c ft_check_int.c ft_cmp.c ft_deque_attach.c ft_deque_cmp_with_med.c ft_deque_cmp_with_med2.c ft_deque_push_swap3.c ft_deque_push_swap4.c ft_deque_push_to.c ft_deque_sort.c ft_deque_sort234_front.c ft_deque_sort4.c ft_deque_sort4_1.c ft_exit.c ft_put_ope_push.c ft_put_ope_sort2.c ft_put_ope_sort3.c ft_put_reverse_rotate.c ft_put_rotate.c ft_put_swap.c main.c
OBJ_PS := ft_check_dup.o ft_check_int.o ft_cmp.o ft_deque_attach.o ft_deque_cmp_with_med.o ft_deque_cmp_with_med2.o ft_deque_push_swap3.o ft_deque_push_swap4.o ft_deque_push_to.o ft_deque_sort.o ft_deque_sort234_front.o ft_deque_sort4.o ft_deque_sort4_1.o ft_exit.o ft_put_ope_push.o ft_put_ope_sort2.o ft_put_ope_sort3.o ft_put_reverse_rotate.o ft_put_rotate.o ft_put_swap.o main.o

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
