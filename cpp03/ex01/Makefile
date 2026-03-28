# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/28 20:02:24 by anruiz-d          #+#    #+#              #
#    Updated: 2026/03/28 20:02:24 by anruiz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Project Name --- #

NAME		=	serena_my_love

# --- Directories --- #

DIR_OBJS	=	objs

# --- Source Files --- #

SRC_FILES	=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp

# --- Object Files --- #

OBJ_FILES	=	$(addprefix $(DIR_OBJS)/, $(SRC_FILES:.cpp=.o))

# --- Compiler and tools --- #

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra -std=c++98
MKDIR		=	mkdir -p
RM			=	rm -rf

# -- Default Target -- #

all		:	$(NAME)

# -- Program Target -- #

$(NAME)	:	$(OBJ_FILES)
			$(CC) $(FLAGS) $(OBJ_FILES) -o $(NAME)

# -- Object File Rule -- #

$(DIR_OBJS)/%.o: %.cpp
			$(MKDIR) $(DIR_OBJS)
			$(CC) $(FLAGS) -c $< -o $@

# -- Cleaning Rules -- #

clean	:
			$(RM) $(DIR_OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean	all

.PHONY	:	all clean fclean re