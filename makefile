NAME = my_printf

OBJ = obj/main.o\
	obj/my_printf.o\


CFLAGS += -Iinclude -Wall -Wextra -Werror -g3 -fsanitize=address

HEADER = include/main.h\
	include/my_printf.h\

BIN = bin/my_printf
CC = gcc
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(BIN) $(OBJ) $(CFLAGS)

obj/main.o: src/main.c
	${CC} ${CFLAGS} -c $< -o $@
obj/my_printf.o: src/my_printf.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) bin/my_printf bin/*.dSYM obj/*