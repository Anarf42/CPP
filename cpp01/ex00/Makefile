# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/10 17:13:23 by anruiz-d          #+#    #+#              #
#    Updated: 2026/02/11 17:34:35 by anruiz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# --- Project Name --- #

NAME		=	umbrella_corp

# --- Directories --- #

DIR_OBJS	=	objs

# --- Source Files --- #

SRC_FILES	=	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				Zombie.cpp

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