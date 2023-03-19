/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:32:09 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/19 16:43:27 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	src_length;
	unsigned int	dest_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i_dest = dest_length;
	i_src = 0;
	while (src[i_src] && i_src < (size - dest_length - 1) && dest_length < size)
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	if (size < dest_length)
		return (size + src_length);
	else
		return (dest_length + src_length);
}
