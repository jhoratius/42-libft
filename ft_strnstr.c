/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:35:10 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/13 16:35:12 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	if ((!little || !big) && len == 0)
		return (0);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			n = 0;
			while (little[j++] != '\0' && i + j - 1 < len)
				if (big[i + j - 1] == little[j - 1])
					n++;
			if (ft_strlen((char *)little) == n)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s_big[] = "aaa";
// 	const char	s_lit[] = "";
// 	const char	s_big2[] = "aaa";
// 	const char	s_lit2[] = "";

// 	printf("ft_strnstr : %s\n", ft_strnstr(s_big, s_lit, 5));
// 	printf("strnstr : %s", strnstr(s_big2, s_lit2, 5));
// 	return (0);
// }