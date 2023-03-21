/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:44:43 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/19 14:48:14 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
			++i;
		return ((char *) &s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (c + 256) % 256)
			return ((char *) &s[i]);
		++i;
	}
	return (0);
}
