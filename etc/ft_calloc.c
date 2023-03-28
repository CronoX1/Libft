/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:41:08 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/28 16:19:46 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	return (ft_bzero(ptr, num * size));
}
