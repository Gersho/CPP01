SRCS		= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= violence
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	HumanA.hpp HumanB.hpp Weapon.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) HumanA.hpp HumanB.hpp Weapon.hpp
				$(CC) $(CFLAGS) -IHumanA.hpp -IHumanB.hpp -IWeapon.hpp -o $(NAME) $(OBJS)

clean:		
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all