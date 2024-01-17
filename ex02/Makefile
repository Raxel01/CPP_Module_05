SRC = Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp

CXX = c++

HEADER = Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp AForm.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = BureaucratExecution

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