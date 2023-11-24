/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:01:58 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/13 16:02:00 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[20] = "pourquoi";
// 	char	str2[20] = "pourquo";
// 	printf("memcmp ft : %d\n", ft_memcmp(str1, str2, 6));
// 	printf("memcmp : %d", memcmp(str1, str2, 6));
// 	return (0);
// }