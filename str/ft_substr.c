/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:04:22 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/12 12:57:34 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_s;

	if (len <= 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	new_s = ft_calloc(len + 1, sizeof(char));
	if (new_s == NULL || !s)
		return (NULL);
	ft_strlcpy(new_s, (char *)(s + start), len + 1);
	return (new_s);
}
