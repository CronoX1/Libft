/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 08:07:52 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/28 10:33:35 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*new_dest;
	const char	*new_src;

	i = 0;
	new_dest = dest;
	new_src = src;
	if (new_dest < new_src)
	{
		while (i < n)
		{
			new_dest[i] = new_src[i];
			++i;
		}
	}
	else if (new_dest > new_src)
	{
		i = n;
		while (i > 0)
		{
			new_dest[i - 1] = new_src[i - 1];
			--i;
		}
	}
	return (dest);
}
