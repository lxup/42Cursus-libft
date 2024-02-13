# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 16:15:19 by lquehec           #+#    #+#              #
#    Updated: 2024/02/13 12:27:50 by lquehec          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                     VARS                                     #
# **************************************************************************** #

END				:=	\033[0m

# COLORS
BLACK			:=	\033[0;30m
RED				:=	\033[0;31m
GREEN			:=	\033[0;32m
ORANGE			:=	\033[0;33m
BLUE			:=	\033[0;34m
PURPLE			:=	\033[0;35m
CYAN			:=	\033[0;36m
LIGHT_GRAY		:=	\033[0;37m
DARK_GRAY		:=	\033[1;30m
LIGHT_RED		:=	\033[1;31m
LIGHT_GREEN		:=	\033[1;32m
YELLOW			:=	\033[1;33m
LIGHT_BLUE		:=	\033[1;34m
LIGHT_PURPLE	:=	\033[1;35m
LIGHT_CYAN		:=	\033[1;36m
WHITE			:=	\033[1;37m

# FONTS
BOLD			:=	\033[1m
DIM				:=	\033[2m
UNDERLINED		:=	\033[4m
BLINK			:=	\033[5m
REVERSE			:=	\033[7m

OS 				:=	$(shell uname)

# **************************************************************************** #
#                                   PROGRAM                                    #
# **************************************************************************** #

NAME			=	libft.a

# **************************************************************************** #
#                                   COMPILER                                   #
# **************************************************************************** #

CC				=	gcc
RM				=	rm -rf
AR				=	ar rc
RN				=	ranlib

CFLAGS 			=	-Wall -Wextra -Werror

# **************************************************************************** #
#                                    PATHS                                     #
# **************************************************************************** #

INCLUDES_PATH		=	includes
OBJ_PATH			=	.obj
VPATH				=	srcs \
						srcs/checker \
						srcs/converter \
						srcs/display \
						srcs/display/char \
						srcs/display/nbr \
						srcs/display/str \
						srcs/list \
						srcs/math \
						srcs/memory \
						srcs/strings \
						srcs/gnl \
						srcs/ft_printf

# **************************************************************************** #
#                                    FLAGS                                     #
# **************************************************************************** #

CFLAGS			+=	-I $(INCLUDES_PATH)

# **************************************************************************** #
#                                   SOURCES                                    #
# **************************************************************************** #

SRC_CHECKER		=	ft_isalnum \
					ft_isalpha \
					ft_isascii \
					ft_isdigit \
					ft_isdigitstr \
					ft_islowercase \
					ft_isprint \
					ft_isuppercase \
					ft_iswhitespace

SRC_CONVERTER	=	ft_atoi \
					ft_itoa \
					ft_itoa_base \
					ft_lowercase_char \
					ft_uppercase_char

SRC_DISPLAY		=	ft_putchar_err \
					ft_putchar_errnl \
					ft_putchar_fd \
					ft_putchar_fdnl \
					ft_putchar_nl \
					ft_putchar \
					ft_putnchar_err \
					ft_putnchar_errnl \
					ft_putnchar_fd \
					ft_putnchar_fdnl \
					ft_putnchar_nl \
					ft_putnchar \
					ft_putnbr_fd \
					ft_putnbr \
					ft_putstr_err \
					ft_putstr_errnl \
					ft_putstr_fd \
					ft_putstr_fdnl \
					ft_putstr_nl \
					ft_putstr

SRC_LIST		=	ft_lstadd_back \
					ft_lstadd_front \
					ft_lstclear \
					ft_lstdelone \
					ft_lstiter \
					ft_lstlast \
					ft_lstmap \
					ft_lstnew \
					ft_lstsize

SRC_MATH		=	ft_abs \
					ft_max \
					ft_min

SRC_MEMORY		=	ft_bzero \
					ft_calloc \
					ft_memchr \
					ft_memcmp \
					ft_memcpy \
					ft_memmove \
					ft_memset

SRC_STRINGS		=	ft_contains_char \
					ft_find_char \
					ft_split \
					ft_strchr \
					ft_strcmp \
					ft_strdup \
					ft_striteri \
					ft_strjoin \
					ft_strlcat \
					ft_strlcpy \
					ft_strlen \
					ft_strmapi \
					ft_strncmp \
					ft_strndup \
					ft_strnstr \
					ft_strrchr \
					ft_strtrim \
					ft_substr \
					ft_tolower \
					ft_toupper

SRC_GNL			=	get_next_line_bonus

SRC_PRINTF		=	ft_printf \
					ft_dprintf \
					handler \
					pad \
					utils

SRCS 			=	$(addsuffix .c, $(SRC_CHECKER)) \
					$(addsuffix .c, $(SRC_CONVERTER)) \
					$(addsuffix .c, $(SRC_DISPLAY)) \
					$(addsuffix .c, $(SRC_LIST)) \
					$(addsuffix .c, $(SRC_MATH)) \
					$(addsuffix .c, $(SRC_MEMORY)) \
					$(addsuffix .c, $(SRC_STRINGS)) \
					$(addsuffix .c, $(SRC_GNL)) \
					$(addsuffix .c, $(SRC_PRINTF))

OBJS			=	$(SRCS:%.c=$(OBJ_PATH)/%.o)

# **************************************************************************** #
#                                    RULES                                     #
# **************************************************************************** #

all:			$(NAME)

$(NAME):		$(OBJ_PATH) $(OBJS)
				@${AR} ${NAME} ${OBJS}
				@${RN} ${NAME}
				@printf "\n$(GREEN)> $(NAME) was successfully compiled 🎉$(END)\n"

$(OBJ_PATH):
				@mkdir -p ${OBJ_PATH}

$(OBJ_PATH)/%.o: %.c
				@printf "$(BLUE)> Compiling libft objects... %-33.33s\r" $@
				@$(CC) $(CFLAGS) -c $< -o $@
			
clean:
				@printf "$(YELLOW)> Cleaning libft... 🧹$(END)\n"
				@${RM} ${OBJ_PATH}
				@printf "$(YELLOW)> All objects files of $(NAME) have been deleted 🗑️$(END)\n"

fclean:			clean
				@${RM} $(NAME)
				@printf "$(YELLOW)> $(NAME) has been deleted 🔥$(END)\n"

re:				fclean all

bonus:			$(BONUS_OBJS)
				${AR} $(NAME) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
