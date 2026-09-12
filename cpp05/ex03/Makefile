# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/18 18:49:22 by anruiz-d          #+#    #+#              #
#    Updated: 2026/09/12 11:29:28 by anruiz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Project Name --- #

NAME		=	intern

# --- Directories --- #

DIR_OBJS	=	objs
DIR_DEP		=	deps

# --- Source Files --- #

SRC_FILES	=	main.cpp \
				AForm.cpp \
				Bureaucrat.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				Intern.cpp


# --- Object Files --- #

OBJ_FILES	=	$(addprefix $(DIR_OBJS)/, $(SRC_FILES:.cpp=.o))
DEPS		=	$(addprefix $(DIR_DEP)/, $(SRC_FILES:.cpp=.d))

# --- Compiler and tools --- #

CXX			=	c++
CXXFLAGS		=	-Wall -Werror -Wextra -std=c++98 -MMD -MP
MKDIR		=	mkdir -p
RM			=	rm -rf

# -- Default Target -- #

all		:	$(NAME)

# -- Program Target -- #

$(NAME)	:	$(OBJ_FILES)
			$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(NAME)

# -- Object File Rule -- #

$(DIR_OBJS)/%.o: %.cpp
			$(MKDIR) $(DIR_OBJS) $(DIR_DEP)
			$(CXX) $(CXXFLAGS) -MF $(DIR_DEP)/$*.d -c $< -o $@

# -- Cleaning Rules -- #

clean	:
			$(RM) $(DIR_OBJS) $(DIR_DEP)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean	all

-include $(DEPS)

.PHONY	:	all clean fclean re