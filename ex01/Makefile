SRCS		= Zombie.cpp ZombieHorde.cpp main.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= zombiehorde
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	Zombie.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) Zombie.hpp
				$(CC) $(CFLAGS) -IZombie.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all