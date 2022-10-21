NAME = libft.a

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
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putnbr_fd.c\
	  ft_putendl_fd.c\
	  ft_strmapi.c\
	   ft_striteri.c\
	  ft_iatoi.c\
	  ft_split.c


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
	 ft_strlcpy.o\
	 ft_strlcat.o\
	 ft_substr.o\
	 ft_strjoin.o\
	 ft_strtrim.o\
	 ft_putchar_fd.o\
	 ft_putstr_fd.o\
	 ft_putnbr_fd.o\
	 ft_putendl_fd.o\
	 ft_strmapi.o\
	 ft_striteri.o\
	 ft_iatoi.o\
	 ft_split.o

BONUS = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c

OBJ_BONUS = ft_lstnew_bonus.o\
		    ft_lstadd_front_bonus.o\
		    ft_lstsize_bonus.o\
		    ft_lstlast_bonus.o\
		    ft_lstadd_back_bonus.o

all : $(NAME)

$(NAME) :
	cc -Wall -Wextra -Werror -c $(SUB)
	ar -rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
