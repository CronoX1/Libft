/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:48:30 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/21 22:31:01 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

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
extern size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
extern size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
extern void		*ft_memcpy(void *dest, const void *src, size_t n);
extern int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

#endif
