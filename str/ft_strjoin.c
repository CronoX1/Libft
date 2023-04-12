/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:31:39 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/12 14:59:14 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*final_string;

	final_string = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (final_string == NULL)
		return (NULL);
	i = 0;
	final_string = ft_memcpy((void *) final_string, (const void *) s1, (size_t) ft_strlen(s1));
	while (s2[i])
	{
		final_string[ft_strlen(s1) + i] = s2[i];
		++i;
	}
	return (final_string);
}
