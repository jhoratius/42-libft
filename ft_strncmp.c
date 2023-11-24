/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:55:10 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/06 16:55:13 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - s2[i]);
	}
	return ((unsigned char)0);
}

// int	main(void)
// {
// 	const	char *s1 = "fuel";
// 	const	char *s2 = "fuel";
// 	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, 5));
// 	printf("strncmp :    %d", strncmp(s1, s2, 5));
// 	return (0);
// }