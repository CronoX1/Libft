/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:54:05 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/23 20:14:02 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*new_s;
	int					len;

	len = ft_strlen(s);
	new_s = (unsigned char *)s;
	if (c == '\0')
	{
		return ((char *)&new_s[len]);
	}
	while (len >= 0)
	{
		if ((int) new_s[len] == (c + 256) % 256)
			return ((char *)&new_s[len]);
		--len;
	}
	return (0);
}
