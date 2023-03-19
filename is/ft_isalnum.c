/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-al <aruiz-al@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:10:43 by aruiz-al          #+#    #+#             */
/*   Updated: 2023/03/14 12:46:33 by aruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 48 && c <= 57) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("El valor de la funcion es %i\n", ft_isalnum('%'));
}
*/
