# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 13:37:01 by skulkamt          #+#    #+#              #
#    Updated: 2023/02/01 13:37:02 by skulkamt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
CFLAGS			= -Wall -Wextra -Werror

LIBC			= ar -rc
LIBR			= ranlib
LIBRARY			= libft.a

SRCS_DIR		= srcs
INCLUDES_DIR	= includes

SOURCES			= $(wildcard $(SRCS_DIR)/*.c)
OBJECTS			= $(patsubst %.c, %.o, $(SOURCES))

all: $(LIBRARY)

re: fclean all

$(LIBRARY): $(OBJECTS)
	$(LIBC) $(LIBRARY) $(OBJECTS)
	$(LIBR) $(LIBRARY)

$(OBJECTS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS_DIR)/*.o

fclean: clean
	rm -rf $(LIBRARY)
