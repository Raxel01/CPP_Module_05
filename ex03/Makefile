# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 16:43:30 by abait-ta          #+#    #+#              #
#    Updated: 2024/01/17 18:33:04 by abait-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp main.cpp

CXX = c++

HEADER = Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp AForm.hpp Intern.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = InternSwitcher

OBJ = ${SRC:.cpp=.o}

all : $(NAME)

$(NAME) : ${OBJ} $(HEADER)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

%.o : %.cpp $(HEADER)
	$(CXX)  $(CXXFLAGS) -c $< -o  $@

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean fclean all re NAME