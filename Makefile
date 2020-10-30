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

ft_memchr.o: ft_memchr.c
	$(COMPIL) -c -o ft_memchr.o ft_memchr.c

ft_memcmp.o: ft_memcmp.c
	$(COMPIL) -c -o ft_memcmp.o ft_memcmp.c

ft_strlen.o: ft_strlen.c
	$(COMPIL) -c -o ft_strlen.o ft_strlen.c

ft_isalnum.o: ft_isalnum.c
	$(COMPIL) -c -o ft_isalnum.o ft_isalnum.c

ft_isalpha.o: ft_isalpha.c
	$(COMPIL) -c -o ft_isalpha.o ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	$(COMPIL) -c -o ft_isdigit.o ft_isdigit.c

ft_strnstr.o: ft_strnstr.c
	$(COMPIL) -c -o ft_strnstr.o ft_strnstr.c

ft_strncmp.o: ft_strncmp.c
	$(COMPIL) -c -o ft_strncmp.o ft_strncmp.c

ft_isascii.o: ft_isascii.c
	$(COMPIL) -c -o ft_isascii.o ft_isascii.c

ft_isprint.o: ft_isprint.c
	$(COMPIL) -c -o ft_isprint.o ft_isprint.c

ft_toupper.o: ft_toupper.c
	$(COMPIL) -c -o ft_toupper.o ft_toupper.c

ft_tolower.o: ft_tolower.c
	$(COMPIL) -c -o ft_tolower.o ft_tolower.c

ft_strrchr.o: ft_strrchr.c
	$(COMPIL) -c -o ft_strrchr.o ft_strrchr.c

ft_strchr.o: ft_strchr.c
	$(COMPIL) -c -o ft_strchr.o ft_strchr.c

ft_atoi.o: ft_atoi.c
	$(COMPIL) -c -o ft_atoi.o ft_atoi.c

ft_strlcpy.o: ft_strlcpy.c
	$(COMPIL) -c -o ft_strlcpy.o ft_strlcpy.c

ft_strlcat.o: ft_strlcat.c
	$(COMPIL) -c -o ft_strlcat.o ft_strlcat.c

ft_calloc.o: ft_calloc.c
	$(COMPIL) -c -o ft_calloc.o ft_calloc.c

ft_strdup.o: ft_strdup.c
	$(COMPIL) -c -o ft_strdup.o ft_strdup.c

ft_substr.o: ft_substr.c
	$(COMPIL) -c -o ft_substr.o ft_substr.c

ft_strjoin.o: ft_strjoin.c
	$(COMPIL) -c -o ft_strjoin.o ft_strjoin.c

ft_strtrim.o: ft_strtrim.c
	$(COMPIL) -c -o ft_strtrim.o ft_strtrim.c

test: main.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strchr.o ft_isalnum.o ft_isalpha.o ft_isdigit.o ft_strnstr.o ft_strncmp.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strrchr.o ft_atoi.o ft_strlcpy.o ft_strlcat.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o
	$(COMPIL) -o test main.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strchr.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strnstr.c ft_strncmp.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_atoi.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c
	rm -rf *.o
clean: 
	rm -rf test *.o 
