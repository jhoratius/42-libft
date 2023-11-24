/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:19:12 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/06 15:19:15 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isdigit : %d\n", ft_isdigit('1'));
// 	printf("isdigit    : %d", isdigit('1'));
// 	return (0);
// }