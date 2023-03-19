/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:44:55 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/17 14:50:49 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;

	sign = 1;
	while (*nptr && ((*nptr >= 9 && *nptr <= 13) || *nptr == 32))
		++nptr;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		++nptr;
	}
	while (*nptr == 48)
		++nptr;
	while (*nptr && (*nptr >= 48 && *nptr <= 57))
	{
		num = num * 10 + (*nptr - '0');
		++nptr;
	}
	return (num * sign);
}
