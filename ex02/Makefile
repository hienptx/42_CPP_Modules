NAME = account

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++17  

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating $(NAME) ..."
	$(CXX) $(CXX_FLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	-rm -f $(OBJS)

fclean: clean
	-rm -f $(NAME)

re: fclean all
