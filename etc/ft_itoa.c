/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:05:11 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/04/23 11:34:59 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	else if (n == 0)
		return (1);
	else if (n < 0)
	{
		++i;
		n = n * -1;
	}
	while (n != 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		len;

	len = ft_intlen(n);
	number = ft_calloc(len + 1, sizeof(char));
	if (n == -2147483648)
		ft_strlcpy(number, "-2147483648", 12);
	else if (n == 0)
		ft_strlcpy(number, "0", 2);
	else
	{
		if (!number)
			return (NULL);
		if (n < 0)
		{
			n = n * -1;
			number[0] = '-';
		}
		number[len] = '\0';
		while (n != 0)
		{
			number[len - 1] = (n % 10) + '0';
			n = n / 10;
			--len;
		}
	}
	return (number);
}
