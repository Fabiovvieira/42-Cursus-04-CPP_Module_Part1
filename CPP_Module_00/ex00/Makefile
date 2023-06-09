# Program name:
NAME	= megaphone

# Compiler and flags
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

# Sources, objects and dir

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean
		$(RM) $(NAME)

re: fclean all
