# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/01/19 18:44:18 by ythollet     #+#   ##    ##    #+#        #
#    Updated: 2018/01/19 18:44:18 by ythollet    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

NAME = libftprintf.a

DIR_LIB = Libftprintf

DIR_INC = Includes

DIR_SRC = Sources

DIR_OBJ = Objects

SRCS = 	ft_printf.c \
		ft_parse.c \
		ft_type.c \
		ft_convert.c \
		ft_print_field.c \
		ft_struct.c \
		ft_cvt_c.c \
		ft_cvt_s.c \
		ft_cvt_o.c \
		ft_cvt_diu.c \
		ft_cvt_xp.c

OBJS = $(addprefix $(DIR_OBJ)/,$(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(DIR_LIB)
	@cp ./$(DIR_LIB)/libftprintf.a ./$(NAME)
	@ar -rcs $(NAME) $(OBJS)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@mkdir -p $(DIR_OBJ)
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(DIR_INC)

clean:
	@rm -rf $(DIR_OBJ)
	@make clean -C $(DIR_LIB)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(DIR_LIB)

re: fclean all