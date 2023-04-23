/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:35:41 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/23 12:00:29 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	number_of_words(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

void	set_final_item(char **strings, int index)
{
	char	*ptrnull;

	ptrnull = NULL;
	strings[index] = ptrnull;
}

void	set_strings(char const *s, char c, char **strings, int	*i_final_array)
{
	int	i;
	int	start;
	int	len;
	int	ci_final_array;

	ci_final_array = *i_final_array;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c) && (i == 0 || s[i - 1] == c))
			start = i;
		if ((s[i] != c) && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			len = (i - start) + 1;
			strings[ci_final_array] = ft_substr(s, start, len);
			ci_final_array++;
		}
		i++;
	}
	*i_final_array = ci_final_array;
}

char	**ft_split(char const *s, char c)
{
	int		words_number;
	char	**strings;
	int		i_final_array;

	if (!s)
		return (NULL);
	words_number = number_of_words(s, c);
	strings = ft_calloc(words_number + 1, sizeof(char *));
	if (strings == NULL)
		return (NULL);
	i_final_array = 0;
	set_strings(s, c, strings, &i_final_array);
	set_final_item(strings, i_final_array);
	return (strings);
}
