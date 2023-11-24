/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:30:03 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/16 13:30:06 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_verification(char *set, char a)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	if (!s1 || !set)
		return (ft_strdup(""));
	end = ft_strlen((char *)s1);
	i = 0;
	while (ft_verification((char *)set, (char)s1[start]))
		start++;
	while (ft_verification((char *)set, (char)s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, (end - start)));
}

// int	main(void)
// {
// 	printf("ft_strtrim : %s\n", ft_strtrim("abcdba", "acb"));
// 	return (0); 		
// }