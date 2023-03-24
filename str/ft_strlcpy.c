/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:56:18 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/24 14:45:48 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while ((int)dstsize - 1 > i && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	if ((int)dstsize > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
