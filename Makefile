COMPIL = gcc -Wall -Wextra -Werror

main.o: main.c
	$(COMPIL) -c -o main.o main.c
ft_memset.o: ft_memset.c
	$(COMPIL) -c -o ft_memset.o ft_memset.c
ft_bzero.o: ft_bzero.c
	$(COMPIL) -c -o ft_bzero.o ft_bzero.c
ft_memcpy.o: ft_memcpy.c
	$(COMPIL) -c -o ft_memcpy.o ft_memcpy.c
ft_memccpy.o: ft_memccpy.c
	$(COMPIL) -c -o ft_memccpy.o ft_memccpy.c
ft_memmove.o: ft_memmove.c
	$(COMPIL) -c -o ft_memmove.o ft_memmove.c
test: main.o ft_bzero.o ft_memcpy.o ft_memccpy.o
	$(COMPIL) -o test main.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
	rm *.o
clean: 
	rm -rf test *.o 
