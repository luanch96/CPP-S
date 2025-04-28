# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luis <luis@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 13:12:29 by luis              #+#    #+#              #
#    Updated: 2025/04/25 11:59:15 by luis             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = harl

CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Harl.cpp
HDRS = Harl.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	c++ $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
