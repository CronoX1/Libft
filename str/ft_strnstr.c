/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:11:00 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/17 15:35:05 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i] == needle[j] && i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i - j);
			i++;
			j++;
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}

/*
#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	int	s2_len;

	s2_len = ft_strlen((char *) s2);
	i = 0;
	if (!(*s2))
		return ((char *) s1);
	while ((*s1 || s1[0] == '\0') && i <= len)
	{
		if (ft_strncmp(s1, s2, s2_len) == 0 && i + s2_len <= len)
			return ((char *) s1);
		++s1;
		++i;
	}
	return (NULL);
}
*/
