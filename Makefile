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
		pf_parse.c \
		pf_type.c \
		pf_convert.c \
		pf_print_field.c \
		pf_struct.c \
		pf_cvt_c.c \
		pf_cvt_s.c \
		pf_cvt_o.c \
		pf_cvt_diu.c \
		pf_cvt_xp.c \
		pf_cvt_br.c

OBJS = $(addprefix $(DIR_OBJ)/,$(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(DIR_LIB)
	@cp ./$(DIR_LIB)/libft.a ./$(NAME)
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