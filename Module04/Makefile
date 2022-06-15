NAME	=	clap_trap

SRCS		=	main.cpp\
				ClapTrap.cpp\

HEADER		=	./ClapTrap.hpp

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