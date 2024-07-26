COLOR_RESET = \033[0m
COLOR_RED = \033[91m
COLOR_GREEN = \033[92m
COLOR_BOLD = \033[1m
MAKEFLAGS += --no-print-directory

NAME		:= btc

SRC			= main.cpp BitcoinExchange.cpp

OBJ			= $(SRC:.cpp=.o)

INCLUDE		= BitcoinExchange.hpp

CXX			= c++
CXXFLAGS		= -Wall -Wextra -Werror -g3
CXXFLAGS		+= -std=c++98

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(OBJ) -o $(NAME)

%.o : %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -I include -c -o $@ $<

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
