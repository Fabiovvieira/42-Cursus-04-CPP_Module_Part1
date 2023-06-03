NAME	= phoneBook

CC		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

HEADER	= Contact.hpp PhoneBook.hpp

SRC		= main.cpp Contact.cpp PhoneBook.cpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re