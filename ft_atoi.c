/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:34:31 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/10 11:34:36 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	n;

	i = 0;
	signe = 1;
	n = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i += 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe *= -1;
		i += 1;
	}
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		n = n * 10 + nptr[i] - 48;
		i += 1;
	}
	return (n * signe);
}

// int	main(void)
// {
// 	printf("ft_atoi : %d\n", ft_atoi("-2147483649664"));
// 	printf("atoi    : %d", atoi("-2147483649664"));
// 	return (0);
// }