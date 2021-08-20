SOURCES            =    $(wildcard *.c)

OBJECTS            =     $(SOURCES:.c=.o)

OBJECTS_BONUS    =     $(SOURCES_BONUS:.c=.o)

NAME            =    libft.a

CC                =    clang
AR                =    ar
RM                =    rm -f

CFLAGS            =    -Wall -Wextra -Werror
ARFLAGS         =    rcs

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# so:
# 				$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
# 				gcc -nostartfiles -shared -o libft.so $(OBJECTS)


all:			$(NAME)

$(NAME):		$(OBJECTS)
				$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

bonus:			$(NAME)
				$(AR) $(ARFLAGS) $(NAME)

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re