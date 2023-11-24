/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:53:49 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/14 15:53:52 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static unsigned long	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	str[20] = "tripouille";
// 	printf("ft_strchr : %s\n", ft_strchr(str, 't' + 256));
// 	printf("strchr :    %s", strchr(str, 't' + 256));
// 	return (0);
// }