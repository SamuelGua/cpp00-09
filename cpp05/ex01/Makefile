COLOR_RESET = \033[0m
COLOR_RED = \033[91m
COLOR_GREEN = \033[92m
COLOR_YELLOW = \033[93m
COLOR_BOLD = \033[1m
MAKEFLAGS += --no-print-directory

NAME		:= Form


SRC 		= Bureaucrat.cpp  Form.cpp  main.cpp

OBJ 		= $(SRC:.cpp=.o)

INCLUDE 	= Bureaucrat.hpp  Form.hpp

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -g3
CFLAGS		+= -Wshadow -Wno-shadow
CFLAGS		+= -std=c++98
CCFLAGS		+= -I include

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) $(CCFLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJ)
	@echo "$(COLOR_RED)Object files are deleted 🗑️$(COLOR_RESET)"

fclean: 
	@$(MAKE) clean
	@$(RM) $(NAME)
	@echo "$(COLOR_RED)$(COLOR_BOLD)All files are deleted 🗑️$(COLOR_RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
