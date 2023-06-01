NAME	= phoneBook

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

HEADER	= Contact.hpp PhoneBook.hpp

SRC	= main.cpp Contact.cpp PhoneBook.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re: clean all

.PHONY: all clean re