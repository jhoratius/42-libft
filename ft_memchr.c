/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:24:01 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/13 14:24:02 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str = (const char *) s;
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// char	str[20] = "pourquoi";
// 	char	tab[] = {-49, 49, 1, -1, 0, -2, 2};
// 	// char	chr = 'r';
// 	printf("memchr ft : %p\n", ft_memchr(tab, -1, 7));
// 	printf("memchr : %p", memchr(tab, -1, 7));
// 	return (0);
// }