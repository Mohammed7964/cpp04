NAME = animal_simulation
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Character.cpp Cure.cpp Ice.cpp AMateria.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp IMateria.hpp Character.hpp Cure.hpp Ice.hpp AMateria.hpp Icharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all