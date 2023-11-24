/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:50:35 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/06 15:50:38 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isprint : %d\n", ft_isprint(10));
// 	printf("isprint    : %d", isprint(10));
// 	return (0);
// }