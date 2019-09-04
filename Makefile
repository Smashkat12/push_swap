# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 13:51:43 by kmorulan          #+#    #+#              #
#    Updated: 2019/09/03 14:01:01 by kmorulan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME = checker

NAME2 = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

LIB = libft

LDFLAGS = -Llibft

LDLIBS = -lft

SRC_PATH = src

SRC_NAME = checker.c\
		chk_func.c\
		chk_sort.c\
		chk_sort.c\
		dup.c\
		sort_a.c\
		get_next_line.c

SRC_NAME2 = push_swap.c\
		push_func.c\
		dup.c\
		lst_len.c\
		display_stack.c\
		sort_a.c

AR = ar rc

INC_LIB = -I libft/

CPPFLAGS = -I includes

OBJ_PATH = obj

OBJ_PATH2 = obj2

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ_NAME2 = $(SRC_NAME2:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

SRC2 = $(addprefix $(SRC_PATH)/,$(SRC_NAME2))

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

OBJ2 = $(addprefix $(OBJ_PATH2)/,$(OBJ_NAME2))

all: $(NAME) $(NAME2)

$(NAME): $(OBJ)
	@make -C $(LIB)
	@echo $(NAME) ": Sources compiling..."
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) $(LDLIBS)
	@echo "Executable "$(NAME)" made"

$(NAME2): $(OBJ2)
	@make -C $(LIB)
	@echo $(NAME2) ": Sources compiling..."
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) $(LDLIBS)
	@echo "Executable "$(NAME2)" made"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(INC_LIB) -o $@ -c $<

$(OBJ_PATH2)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH2) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(INC_LIB) -o $@ -c $<

clean:
	@make fclean -C $(LIB)
	@rm -f $(OBJ) $(OBJ2)
	@rm -rf $(OBJ_PATH) || true
	@rm -rf $(OBJ_PATH2) || true
	@echo $(OBJ_PATH)" and "$(OBJ_PATH2)" deleted !"

fclean: clean
	@rm -f $(NAME) $(NAME2)
	@echo "Executable "$(NAME)" and "$(NAME2)" deleted !"

re: fclean all
	@echo "Make re done !"

norme:
	norminette $(SRC)
	norminette $(INC_PATH)