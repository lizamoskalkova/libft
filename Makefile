NAME = libft.a
HEADER = libft.h
SRC_FILES = ft_atoi.c		ft_isalpha.c		ft_itoa.c\
			ft_memcpy.c		ft_putendl_fd.c		ft_strdup.c\
			ft_strmapi.c	ft_tolower.c		ft_bzero.c\
			ft_isascii.c	ft_memcpy.c			ft_memmove.c\
			ft_putnbr_fd.c	ft_strlcat.c		ft_strncmp.c\
			ft_toupper.c	ft_calloc.c			ft_isdigit.c\
			ft_memchr.c		ft_memset.c			ft_putstr_fd.c\
			ft_strlcpy.c	ft_strnstr.c		ft_isalnum.c\
			ft_isprint.c	ft_memcmp.c			ft_putchar_fd.c\
			ft_strchr.c		ft_strlen.c			ft_strrchr.c\
			ft_substr.c		ft_strjoin.c		ft_striteri.c\
			ft_split.c		ft_strtrim.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(HEADER)
RM = rm -rf
.PHONY: all clean fclean re
all:  $(NAME)
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ_FILES) $(HEADER)
	ar rcs $(NAME) $?
clean:
	$(RM) $(OBJ_FILES)
fclean: clean
	$(RM) $(NAME)
re: fclean all










