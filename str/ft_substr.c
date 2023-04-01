/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:04:22 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/01 14:15:18 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char *new_s;

	if (s == NULL || len <= 0)
		return ("");
	i = 0;
	new_s = (char *)malloc((len + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	while (i < start && s[i])
		++i;
	ft_strlcpy(new_s, (const char *)&s[i], len + 1);
	return (new_s);
}
