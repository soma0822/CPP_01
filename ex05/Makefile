NAME = a.out

SRCS = main.cpp Harl.cpp

OBJS = $(addprefix objs/,$(SRCS:.cpp=.o))

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

ifeq ($(MAKECMDGOALS), debug)
CXXFLAGS += -fsanitize=address -fno-omit-frame-pointer -g
endif

RM = rm -rf

.PHONY: all clean fclean re debug

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $^ -o $@

objs/%.o: %.cpp | objs
	$(CXX) $(CXXFLAGS) -c $< -o $@

objs:
	mkdir -p objs

clean:
	$(RM) objs

fclean: clean
	$(RM) $(NAME)

debug: re

re: fclean all