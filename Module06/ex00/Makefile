NAME		=	convert

SRCS		=	main.cpp\
				Converter.cpp\
				MyDouble.cpp\
				MyInteger.cpp\
				MyChar.cpp\
				MyFloat.cpp\
				AMyType.cpp


HEADER		=	Converter.h\
				MyDouble.h\
				MyInteger.h\
				MyChar.h\
				MyFloat.h\
				AMyType.h


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