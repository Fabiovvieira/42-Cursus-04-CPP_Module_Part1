# Program name:
NAME	= megaphone

# Compiler and flags
CPP		= c++
CFLAGS	= -Wall -Wextra -Werror
EFLAGS	= -std=c++98
RM		= rm -rf

# Sources, objects and dir

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(CPP) $(CFLAGS) $(EFLAGS) $(OBJ) -o $(NAME)

clean:
		@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME)

re: fclean all