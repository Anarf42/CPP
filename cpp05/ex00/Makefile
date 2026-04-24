# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/22 10:59:25 by codespace         #+#    #+#              #
#    Updated: 2026/04/24 11:19:43 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name		=	bureaucrat

DIR_OBJS	=	objs

SRCS_FILES	=	Bureaucrat.cpp	\
				main.cpp

OBJS_FILES	=	$(addprefix $(DIR_OBJS)/, $(SRCS_FILES:.c=.o))

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra -std=c++98
MKDIR		=	mkdir -p
RM			=	rm -rf


all			:	$(NAME)

$(NAME)		:	$(OBJS_FILES)
				$(CC) $(FLAGS) $(OBJS_FILES) -o $(NAME)
				
$(DIR_OBJS)/%.o: %.cpp
			$(MKDIR) $(DIR_OBJS)
			$(CC) $(FLAGS) -c $< -o $@

clean	:
			$(RM) $(DIR_OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean	all

.PHONY	:	all clean fclean re