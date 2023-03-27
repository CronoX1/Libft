/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:47:11 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/27 12:30:40 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	int		i;
	char	*new_ptr;

	i = 0;
	new_ptr = (char *)ptr;
	while (i < (int)num)
	{
		new_ptr[i] = value;
		++i;
	}
	return (new_ptr);
}
