NAME	= account

CC		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

HEADER	= Account.hpp

SRC		= tests.cpp Account.cpp

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