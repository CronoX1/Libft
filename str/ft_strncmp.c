/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:39:26 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/23 20:05:03 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*new_s1;
	const unsigned char	*new_s2;

	new_s1 = (const unsigned char *)s1;
	new_s2 = (const unsigned char *)s2;
	while (n > 0 && (*new_s1 || *new_s2))
	{
		if (*new_s1 != *new_s2)
			return (*new_s1 - *new_s2);
		++new_s1;
		++new_s2;
		--n;
	}
	return (0);
}
