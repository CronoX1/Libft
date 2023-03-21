/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:08:07 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/21 23:15:12 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t				i;
	const unsigned char	*new_ptr1;
	const unsigned char	*new_ptr2;

	i = 0;
	new_ptr1 = (const unsigned char *)ptr1;
	new_ptr2 = (const unsigned char *)ptr2;
	if (num == 0)
		return (0);
	while (num > 1 && new_ptr1[i] == new_ptr2[i])
	{
		++i;
		--num;
	}
	return (new_ptr1[i] - new_ptr2[i]);
}
