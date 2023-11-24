/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:12:24 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/14 14:12:29 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	const char	*str;
	char		*cpy_str;
	int			length;
	int			i;

	str = s;
	length = ft_strlen(str);
	i = 0;
	cpy_str = (char *)malloc(length + 1);
	if (cpy_str != NULL)
	{
		while (str[i])
		{
			cpy_str[i] = str[i];
			i++;
		}
		cpy_str[i] = '\0';
	}
	return (cpy_str);
}

// int	main(void)
// {
// 	const char str[] = "buibui";
// 	char *duplicat = ft_strdup(str);
// 	char *duplicat2 = strdup(str);

// 	if(duplicat != NULL)
// 	{
// 		printf("ft_strdup : %s\n", duplicat);
// 		printf("strdup    : %s\n", duplicat2);

// 		free(duplicat);
// 		free(duplicat2);
// 	}
// 	return(0);
// }
