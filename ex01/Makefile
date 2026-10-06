NAME =		phonebook
SRCS =		main.cpp
OBJS =		$(SRCS:.cpp=.o)
DEPS =		$(OBJS:.o=.d)

CPP =		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98 -MMD -MP

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CPP) $(CFLAGS) -c $(SRCS) -o $(OBJS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: fclean
	$(MAKE) all CFLAGS="$(CFLAGS) -g -fno-limit-debug-info"

.PHONY: all clean fclean re debug

-include $(DEPS)
