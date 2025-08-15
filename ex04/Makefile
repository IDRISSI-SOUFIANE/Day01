CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

FILES = main.cpp sed.cpp
OBJECT = $(FILES:.cpp=.o)
NAME = replace

all: $(NAME)

$(NAME): $(OBJECT)
	$(CC) $(CXXFLAGS) $(OBJECT) -o $(NAME)

%.o: %.cpp *.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME)

re: fclean all
