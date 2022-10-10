NAME= libft.a
SUB = ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_atoi.c\
	  ft_bzero.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_memcmp.c\
	  ft_memset.c\
	  ft_memchr.c\
	  ft_memcpy.c\
	  ft_strchr.c\
	  ft_strlen.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_strncmp.c\
	  ft_strrchr.c\
	  ft_strdup.c\
	  ft_strnstr.c\
	  ft_calloc.c\
	  ft_memmove.c\
	  ft_strlcpy.c


OBJ= ft_isalpha.o\
     ft_isdigit.o\
	 ft_isalnum.o\
	 ft_atoi.o\
	 ft_bzero.o\
	 ft_isascii.o\
	 ft_isprint.o\
	 ft_memcmp.o\
	 ft_memset.o\
	 ft_memchr.o\
	 ft_memcpy.o\
	 ft_strchr.o\
	 ft_strlen.o\
	 ft_tolower.o\
	 ft_toupper.o\
	 ft_strncmp.o\
	 ft_strrchr.o\
	 ft_strdup.o\
	 ft_strnstr.o\
	 ft_calloc.o\
	 ft_memmove.o\
	 ft_strlcpy.o


all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SUB)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
