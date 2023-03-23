/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:56:18 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/23 13:37:53 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
		return (0);
	if ((int)dstsize - 1 > 0)
	{
		while (src[i] != '\0' && (int)dstsize - 1 > 0)
		{
			dst[i] = src[i];
			++i;
			--dstsize;
		}
		dst[i] = '\0';
	}
	if (ft_strlen(src) > dstsize)
		return (ft_strlen(src));
	return (i);
}
