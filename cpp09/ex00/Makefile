NAME =		btc

SRCS =		./main.cpp \
		./BitcoinExchange.cpp \

DEPENDENCIES =	$(SRCS) \
		./BitcoinExchange.hpp \

CC = c++

CFLAGS = -g -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(DEPENDENCIES)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Compilation Done"

clean:
	@rm -f $(NAME)
	@echo "Cleaned"

re: clean all

t: all
	@echo "Test with teste.txt"
	@./$(NAME) ./teste.txt

.PHONY: all clean re
