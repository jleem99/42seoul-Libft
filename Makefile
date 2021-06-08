# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/24 21:00:24 by jleem             #+#    #+#              #
#    Updated: 2021/06/08 22:39:34 by jleem            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

AR			= ar -rcs
RM			= rm -f

NAME		= libft.a

INCDIR		= .
SRCDIR		= .

SRCS_P1		= $(patsubst %, $(SRCDIR)/ft_%.c, \
				memset bzero memcpy memccpy memmove memchr memcmp \
				strlen strlcpy strlcat strchr strrchr strnstr strncmp \
				atoi isalpha isdigit isalnum isascii isprint \
				toupper tolower calloc strdup)
SRCS_P2		= $(patsubst %, $(SRCDIR)/ft_%.c, \
				substr strjoin strtrim split itoa strmapi \
				putchar_fd putstr_fd putendl_fd putnbr_fd)
SRCS_BONUS	= $(patsubst %, $(SRCDIR)/ft_%.c, \
				lstnew lstadd_front lstsize lstlast lstadd_back \
				lstdelone lstclear lstiter lstmap)
SRCS_CUSTOM	= $(patsubst %, $(SRCDIR)/ft_%_bonus.c, \
				free_split minmax \
				islower isupper isspace strcmp strcpy strcat \
				atol atoll \
				make_array free_array array_push array_pop \
				bigint bigint2 bigint_inspect bigint_shift \
				bigint_string bigint_value)
SRCS_ALL	= $(SRCS_P1) $(SRCS_P2) $(SRCS_BONUS) $(SRCS_CUSTOM)

OBJS_P1		= $(SRCS_P1:.c=.o)
OBJS_P2		= $(SRCS_P2:.c=.o)
OBJS_ALL	= $(SRCS_ALL:.c=.o)

ifdef MAKE_BONUS
	OBJS_TARGET = $(OBJS_ALL)
else
	OBJS_TARGET = $(OBJS_P1) $(OBJS_P2)
endif

all			: $(NAME)

$(NAME)		: $(OBJS_TARGET)
	$(AR) $@ $^

clean		:
	$(RM) $(OBJS_ALL)

fclean		: clean
	$(RM) $(NAME)

re			: fclean all

bonus		:
	$(MAKE) MAKE_BONUS=1

.PHONY		: all clean fclean re bonus
