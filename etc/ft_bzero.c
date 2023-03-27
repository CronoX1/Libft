/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:22:56 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/27 12:31:10 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_bzero(void *s, size_t num)
{
	int		i;
	char	*new_s;

	i = 0;
	new_s = (char *)s;
	while (i < (int)num)
	{
		new_s[i] = 0;
		++i;
	}
	return (new_s);
}
