NAME = ClapTrap

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++17 -Wshadow 

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

PURPLE = \033[0;35m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(PURPLE)"
	@echo "  ██████╗  ██████╗   ██████╗"
	@echo "  ██╔═══   ██   ██║  ██   ██║"
	@echo "  ██║      ██████╔╝  ██████╔╝"
	@echo "  ██║      ██╔═══╝   ██╔═══╝"
	@echo "  ██████║  ██║       ██║"
	@echo "  ╚═════╝  ╚═╝       ╚═╝"
	@echo "Creating $(NAME)..."
	@echo "$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "Cleaning up..."
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
