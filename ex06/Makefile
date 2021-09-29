SRCS		= Karen.cpp main.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= karen
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	Karen.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) Karen.hpp
				$(CC) $(CFLAGS) -IKaren.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all