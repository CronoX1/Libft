/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:56:18 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/19 17:29:25 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	if (dst[i] == '\0' || src[i] == '\0')
		return (0);
	while(src[i] != '\0' && dstsize - 1 > 0)
	{
		dst[i] = src[i];
		++i;
		printf("dstsize vale %zu\n", dstsize);
		--dstsize;
	}
	dst[i] = '\0';
	return (i + 1);
}
