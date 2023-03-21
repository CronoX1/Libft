/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:45:13 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/21 21:14:19 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*new_src;
	char	*new_dest;

	i = 0;
	new_src = (char *)src;
	new_dest = dest;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		++i;
	}
	return (new_dest);
}
