all : my_printf

my_printf : my_printf.o
	gcc -Wall -Wextra -Werror -o my_printf my_printf.o

my_printf.o : my_printf.c
	gcc -Wall -Wextra -Werror -c my_printf.c

clean:
	rm -f *.o

fclean: clean
	rm -f my_printf

re: fclean all