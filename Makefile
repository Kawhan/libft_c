SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memset.c ft_strlen.c  \
ft_tolower.c ft_toupper.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c  \

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