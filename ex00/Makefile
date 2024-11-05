# executable
NAME = megaphone

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -std=c++98  

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re
 
all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating $(NAME) ..."
	$(CXX) $(CXX_FLAGS) $(OBJS) -o $@

# %.o: %.cpp
# 	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	@echo "Cleaning up..."
	-rm -f $(OBJS)

fclean: clean
	@echo "Cleaning up..."
	-rm -f $(NAME)

re: fclean all
