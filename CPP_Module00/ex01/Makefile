NAME	=	phone_book

SRCS		=	main.cpp\
				PhoneBook.cpp\
				Contact.cpp\
				

OBJ			=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -rf

FLAGS		=	 -Wall -Wextra -Werror 

VERSION		=	-std=c++98

DEBAG		=	-g

.PHONY		:	all clean fclean re bonus

all			:	$(NAME)

$(NAME)		:	$(OBJ)  ./PhoneBook.hpp ./Contact.hpp
						$(CC) $(VERSION) $(FLAGS) $(OBJ) -o $(NAME) 
%.o			:	%.cpp $(HEADER)
								$(CC) $(VERSION) -I$(./PhoneBook.hpp) $(FLAGS) $(DEBAG) -c $< -o $@

clean		:
				$(RM) $(OBJ)

fclean		:	clean
						$(RM) $(NAME)

re			:	fclean $(NAME)