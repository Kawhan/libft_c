SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c  ft_memset.c  \
ft_strchr.c ft_strdup.c ft_strlcat.c   ft_strlcpy.c ft_strlen.c  ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_tolower.c ft_toupper.c  \


BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ := $(SRC:%.c=%.o)

BONUS_OBJ := $(BONUS_SRC:%.c=%.o)

all:    $(NAME)

$(NAME):    $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus:
	$(CC) $(CFLAGS) -c $(BONUS_SRC)
	ar -rcs $(NAME) $(BONUS_OBJ)

clean:
	rm -rf *.o
	rm -rf ./a.out

fclean:    clean
	rm -rf $(NAME)

re:    fclean all