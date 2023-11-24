/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:59:41 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/14 10:59:46 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if (((int)j) != -1)
		return (((char *)s) + j);
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "tripouille";
// 	printf("ft_strrchr : %s\n", ft_strrchr(str, 0));
// 	printf("strrchr :    %s", strrchr(str, 0));
// 	return (0);
// }