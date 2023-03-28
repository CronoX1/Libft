/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:30:03 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/28 17:55:32 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	int		str_len;

	str_len = ft_strlen(str);
	new_str = (char *)ft_calloc(str_len + 1, sizeof(char));
	new_str = ft_memmove(new_str, (char *)str, str_len);
	return (new_str);
}
