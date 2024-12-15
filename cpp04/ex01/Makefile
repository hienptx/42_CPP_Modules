
# -c
# This tells the compiler to compile the source file into an object file (.o), without linking.

# $<
# This is a Make automatic variable that refers to the first prerequisite of the current target.
# In most cases, it refers to the source file being compiled.

# -o $@
# This tells the compiler to write the output to the file specified by $@,
# which is another Make automatic variable that refers to the name of the 
# target being generated (typically the object file).


NAME = polymorphism

SRCS_PATH = ./srcs
OBJS_PATH = ./objs

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++17 -I./includes

SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(addprefix $(OBJS_PATH)/, $(SRCS:.cpp=.o))

PURPLE = \033[0;35m
RESET = \033[0m

.PHONY: all clean fclean re

# Default target
all: $(NAME)

# Link objects to create the final binary
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

# Rule to create object files from source files
$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.cpp
	@mkdir -p $(OBJS_PATH)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Create objs directory if it doesn't exist
$(OBJS_PATH):
	@mkdir -p $(OBJS_PATH)

# Clean up object files
clean:
	@echo "Cleaning up..."
	@rm -f $(OBJS)

# Full clean (also removes the binary)
fclean: clean
	@rm -f $(NAME)

# Rebuild everything
re: fclean all
