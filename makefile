NAME = libft.a
SRC = ft_strlen.c ft_memset.c ft_atoi.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_strncmp.c ft_strchr.c ft_strrchr.c \
ft_isalpha.c ft_isalnum.c ft_strdup.c ft_memcmp.c ft_memcpy.c ft_bzero.c ft_memmove.c ft_memchr.c ft_memccpy.c \
ft_calloc.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_strlcpy.c ft_strlcat.c ft_strjoin.c ft_itoa.c ft_strnstr.c ft_strmapi.c ft_split.c \
ft_substr.c ft_strtrim.c \

OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
