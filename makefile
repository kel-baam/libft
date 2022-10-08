NAME= libft.h
SUB = ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_atoi.c\
	  ft_bzero.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_memcmp.c\
	  ft_memset.c\
	  ft_strchr.c\
	  ft_strlen.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_strncmp.c\


OBJ= ft_isalpha.o\
     ft_isdigit.o\
	 ft_isalnum.o\
	 ft_atoi.o\
	 ft_bzero.o\
	 ft_isascii.o\
	 ft_isprint.o\
	 ft_memcmp.o\
	 ft-memset.o\
	 ft_strchr.o\
	 ft_strlen.o\
	 ft_tolower.o\
	 ft_toupper.o\
	 ft_strncmp\


all: $(SUB)
	gcc -Wall -Wextra -Werror -c $(SUB)

clean:
	rm -f $(OBJ)
