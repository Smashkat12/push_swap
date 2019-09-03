# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 13:51:43 by kmorulan          #+#    #+#              #
#    Updated: 2019/08/20 17:33:01 by kmorulan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT = libft/ft_atoi.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_memchr.c \
    libft/ft_memcpy.c libft/ft_memset.c libft/ft_strchr.c libft/ft_strcpy.c libft/ft_strlcat.c \
    libft/ft_strncat.c libft/ft_strncpy.c libft/ft_strrchr.c libft/ft_tolower.c libft/ft_bzero.c \
    libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_memccpy.c libft/ft_memcmp.c libft/ft_memmove.c \
    libft/ft_strcat.c libft/ft_strcmp.c libft/ft_strdup.c libft/ft_strlen.c libft/ft_strncmp.c \
    libft/ft_strstr.c libft/ft_toupper.c libft/ft_memalloc.c libft/ft_memdel.c libft/ft_strnew.c \
    libft/ft_strdel.c libft/ft_strclr.c libft/ft_striter.c libft/ft_striteri.c libft/ft_strmap.c \
    libft/ft_strmapi.c libft/ft_strequ.c libft/ft_strnequ.c libft/ft_strsub.c libft/ft_strjoin.c \
    libft/ft_strtrim.c libft/ft_strsplit.c libft/ft_itoa.c libft/ft_putchar.c libft/ft_putstr.c \
    libft/ft_putendl.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c \
    libft/ft_putnbr_fd.c libft/ft_putnbr.c libft/ft_strnstr.c libft/ft_lstnew.c libft/ft_lstdel.c \
	libft/ft_lstdelone.c libft/ft_lstadd.c libft/ft_lstiter.c libft/ft_lstmap.c libft/ft_isupper.c \
	libft/ft_islower.c libft/ft_strndup.c libft/ft_lstlen.c libft/ft_copyuntil.c libft/ft_strjoinch.c \
	libft/ft_swapnfree.c

PRINTF = ft_printf.c flags.c format_specifier.c handle_c.c handle_id.c handle_o.c handle_p.c handle_s.c \
        handle_u.c handle_x.c initializers.c itoa_id.c itoa_u.c itoa_x.c length_mods.c parse_format.c \
        precision_id.c precision_p.c precision_s.c prefix.c print_handler.c width_id.c width_p.c \
        width_s.c itoa_o.c

INC = includes/ft_printf.h libft/libft.h

FILES = $(LIBFT) $(PRINTF)

OBJ = *.o

FLAGS = -Wall -Werror -Wextra -c

all: $(NAME)
$(NAME):
	gcc -c $(FLAGS) $(FILES) $(INC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: clean fclean all re