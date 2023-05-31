/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:35:41 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/05/31 20:09:01 by aruiz-al         ###   ########.fr       */
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

static char	*get_next_word(char const *s, char c, int *i)
{
	char	*word;
	int		start;
	int		len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	return (word);
}

static char	**free_all(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		++i;
	}
	free(strings);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		words_number;
	char	**strings;
	int		i_final_array;
	int		i;

	if (!s)
		return (NULL);
	words_number = number_of_words(s, c);
	strings = ft_calloc(words_number + 1, sizeof(char *));
	if (strings == NULL)
		return (NULL);
	i_final_array = 0;
	i = 0;
	while (i_final_array < words_number)
	{
		strings[i_final_array] = get_next_word(s, c, &i);
		if (!strings[i_final_array])
			return (free_all(strings));
		++i_final_array;
	}
	strings[i_final_array] = NULL;
	return (strings);
}
