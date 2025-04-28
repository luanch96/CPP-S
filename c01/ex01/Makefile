# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luis <luis@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 13:11:50 by luis              #+#    #+#              #
#    Updated: 2025/04/25 11:53:40 by luis             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombies

CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
HDRS = Zombie.hpp
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