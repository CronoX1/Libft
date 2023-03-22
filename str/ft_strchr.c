/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:44:43 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/22 17:45:35 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	const unsigned char *new_s;

	i = 0;
	new_s = (const unsigned char *)s;
	if (c == '\0')
	{
		while (new_s[i] != '\0')
			++i;
		return ((char *) &new_s[i]);
	}
	while (new_s[i] != '\0')
	{
		if (new_s[i] == (c + 256) % 256)
			return ((char *) &new_s[i]);
		++i;
	}
	return (0);
}
