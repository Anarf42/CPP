# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/14 14:04:22 by anruiz-d          #+#    #+#              #
#    Updated: 2026/02/17 17:32:07 by anruiz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# --- Project Name --- #

NAME		=	unnecessary_violence

# --- Directories --- #

DIR_OBJS	=	objs

# --- Source Files --- #

SRC_FILES	=	main.cpp \
				HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp

# --- Object Files --- #

OBJ_FILES	=	$(addprefix $(DIR_OBJS)/, $(SRC_FILES:.cpp=.o))

# --- Compiler and tools --- #

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra -std=c++98
INCLUDE		=	-I.
MKDIR		=	mkdir -p
RM			=	rm -rf

# -- Default Target -- #

all		:	$(NAME)

# -- Program Target -- #

$(NAME)	:	$(OBJ_FILES)
			$(CC) $(FLAGS) $(OBJ_FILES) $(INCLUDE) -o $(NAME)

# -- Object File Rule -- #

$(DIR_OBJS)/%.o: %.cpp
			$(MKDIR) $(DIR_OBJS)
			$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

# -- Cleaning Rules -- #

clean	:
			$(RM) $(DIR_OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean	all

.PHONY	:	all clean fclean re