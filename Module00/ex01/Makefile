NAME	=	phone_book

SRCS		=	main.cpp\
				PhoneBook.cpp\
				Contact.cpp\

HEADERS		=	./PhoneBook.hpp\
				./Contact.hpp

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
%.o			:	%.cpp $(HEADERS)
								$(CC) $(VERSION) $(FLAGS) $(DEBAG) -c $< -o $@

clean		:
				$(RM) $(OBJ)

fclean		:	clean
						$(RM) $(NAME)

re			:	fclean $(NAME)