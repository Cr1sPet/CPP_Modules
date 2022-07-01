NAME		=	bureaucrat

SRCS		=	main.cpp\
				Bureaucrat.cpp\
				Form.cpp\
				PresidentialPardonForm.cpp\
				RobotomyRequestForm.cpp\
				ShrubberyCreationForm.cpp\
				Intern.cpp\

HEADER		=	./Bureaucrat.h\
				./Form.h\
				./PresidentialPardonForm.hpp\
				./RobotomyRequestForm.hpp\
				./ShrubberyCreationForm.hpp\
				./Intern.hpp





OBJ			=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -rf

FLAGS		=	 -Wall -Wextra -Werror

VERSION		=	-std=c++98

DEBAG		=	-g

.PHONY		:	all clean fclean re bonus

all			:	$(NAME)

$(NAME)		:	$(OBJ)
						$(CC) $(VERSION) $(FLAGS) $(OBJ) -o $(NAME) 
%.o			:	%.cpp $(HEADER)
								$(CC) $(VERSION) $(FLAGS) $(DEBAG) -c $< -o $@

clean		:
				$(RM) $(OBJ)

fclean		:	clean
						$(RM) $(NAME)

re			:	fclean $(NAME)