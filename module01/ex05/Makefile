NAME = Harl     # Nom de l'exécutable

CC = c++          # Compilateur
CFLAGS = -Wall -Wextra -Werror -std=c++98    # Flags du compilateur

# Liste des fichiers sources
SRCS = main.cpp \
	Harl.cpp

# Transforme les .cpp en .o
OBJS = $(SRCS:.cpp=.o)

# Règle par défaut
all: $(NAME)

# Crée l'exécutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compile les fichiers sources en objets
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoie les fichiers objets
clean:
	rm -f $(OBJS)

# Nettoie tout (objets et exécutable)
fclean: clean
	rm -f $(NAME)

# Recompile tout
re: fclean all

.PHONY: all clean fclean re