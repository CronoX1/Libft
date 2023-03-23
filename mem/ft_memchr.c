/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:44:43 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/23 18:58:46 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new_s;

	new_s = (unsigned char *)s;
	while (*new_s != (unsigned char)c && n > 1)
	{
		++new_s;
		--n;
	}
	if (*new_s == (unsigned char)c && n != 0)
		return ((void *)new_s);
	return (0);
}
