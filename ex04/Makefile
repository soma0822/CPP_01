NAME = a.out

SRCS = main.cpp Sed.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

ifeq ($(MAKECMDGOALS), debug)
CXXFLAGS += -fsanitize=address -fno-omit-frame-pointer -g
endif

CC = c++

RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

debug: re

re: fclean all
