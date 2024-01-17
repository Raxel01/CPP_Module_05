SRC = Bureaucrat.cpp Form.cpp main.cpp

CXX = c++

HEADER = Bureaucrat.hpp Form.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = BureaucratForm

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