/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:41:52 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/19 15:19:07 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*end(char *new_s1, char const *new_set)
{
	int		i;
	int		z;
	char	*str;

	i = (int) ft_strlen(new_s1);
	z = 0;
	while (i > 0)
	{
		while (new_set[z])
		{
			if (new_set[z] == new_s1[i - 1])
			{
				z = 0;
				break ;
			}
			++z;
		}
		if (z == (int) ft_strlen(new_set))
			break ;
		--i;
	}
	str = ft_calloc(i + 1, sizeof(char));
	ft_strlcpy(str, new_s1, i + 1);
	return (str);
}

char	*begin(char const *new_s1, char const *new_set)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (new_s1[i])
	{
		while (new_set[z])
		{
			if (new_set[z] == new_s1[i])
			{
				z = 0;
				break ;
			}
			++z;
		}
		if (z == (int) ft_strlen(new_set))
			break ;
		++i;
	}
	return (end((char *) &new_s1[i], new_set));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	return ((char *) begin(s1, set));
}
