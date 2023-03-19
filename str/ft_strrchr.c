/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:54:05 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/19 15:28:36 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *) &s[len]);
	}
	while (len >= 0)
	{
		if ((int) s[len] == c)
			return ((char *) &s[len]);
		--len;
	}
	return (0);
}
