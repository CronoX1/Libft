/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:45:13 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/12 11:42:06 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_src;
	unsigned char	*new_dest;

	if (!dest && !src)
		return (NULL);
	i = 0;
	new_src = (unsigned char *) src;
	new_dest = (unsigned char *) dest;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		++i;
	}
	return (new_dest);
}
