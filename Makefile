# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 00:24:35 by egiubell          #+#    #+#              #
#    Updated: 2024/03/26 16:02:24 by egiubell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ZombieDoc

CC			= g++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .obj

SRC		= mainDoc ZombieDoc

OBJ			= $(addprefix $(OBJDIR)/, $(SRC:=.o))
HEADER		= ZombieDoc.hpp

ifeq ($(DEBUG), 1)
	OPTS = -g
endif

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus norm