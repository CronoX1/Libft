/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:48:30 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/23 15:29:22 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

extern int		ft_atoi(const char *nptr);
extern int		ft_isalnum(int c);
extern int		ft_isalpha(int c);
extern int		ft_isascii(int c);
extern int		ft_isdigit(char c);
extern int		ft_isprint(int c);
extern size_t	ft_strlen(const char *c);
extern int		ft_tolower(int c);
extern int		ft_toupper(int c);
extern int		ft_strncmp(const char *s1, const char *s2, size_t n);
extern char		*ft_strnstr(const char *s1, const char *s2, size_t n);
extern char		*ft_strchr(const char *s, int c);
extern char		*ft_strrchr(const char *s, int c);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
extern size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
extern void		*ft_memcpy(void *dest, const void *src, size_t n);
extern int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
extern void		*ft_memchr(const void *str, int c, size_t n);
extern void		*ft_memset(void *ptr, int value, size_t num);
extern void		*ft_bzero(void *s, size_t num);
extern void		*ft_memmove(void *dets, const void *src, size_t n);
extern void		*ft_calloc(size_t num, size_t size);
char			*ft_strdup(const char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *c, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *c, int fd);

#endif
