/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:41:52 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/23 21:19:09 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	get_i(char *new_s1, char const *new_set)
{
	int	i;
	int	z;

	z = 0;
	i = ft_strlen(new_s1);
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
	return (i);
}

char	*end(char *new_s1, char const *new_set)
{
	int		i;
	char	*str;

	i = get_i(new_s1, new_set);
	str = ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
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
