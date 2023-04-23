NAME = libft.a


RM = rm -f


CC = gcc


CFLAGS = -Wall -Wextra -Werror


SRCs = etc/ft_atoi.c	\
	   etc/ft_bzero.c	\
	   etc/ft_calloc.c	\
	   etc/ft_split.c	\
	   etc/ft_itoa.c	\
	   is/ft_isalnum.c	\
	   is/ft_isalpha.c	\
	   is/ft_isascii.c	\
	   is/ft_isdigit.c	\
	   is/ft_isprint.c	\
	   str/ft_strlen.c	\
	   str/ft_strncmp.c	\
	   str/ft_strnstr.c	\
	   str/ft_strchr.c	\
	   str/ft_strlcpy.c	\
	   str/ft_strlcat.c	\
	   str/ft_strncmp.c	\
	   str/ft_strrchr.c	\
	   str/ft_strdup.c	\
	   str/ft_strjoin.c	\
	   str/ft_substr.c	\
	   str/ft_strtrim.c	\
	   str/ft_strmapi.c	\
	   str/ft_striteri.c	\
	   to/ft_tolower.c	\
	   to/ft_toupper.c	\
	   mem/ft_memcpy.c	\
	   mem/ft_memcmp.c	\
	   mem/ft_memchr.c	\
	   mem/ft_memset.c	\
	   mem/ft_memmove.c	\
	   fd/ft_putchar_fd.c	\
	   fd/ft_putstr_fd.c	\
	   fd/ft_putnbr_fd.c	\

OBJs = $(SRCs:.c=.o)


all : $(NAME)

$(NAME) : $(OBJs)
	ar rcs $(NAME) $(OBJs)

$.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean :
	$(RM) $(OBJs)


fclean : clean
	$(RM) $(NAME)


re : fclean all
