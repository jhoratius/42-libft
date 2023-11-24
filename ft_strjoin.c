/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:48:39 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/15 17:48:44 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc((ft_strlen((char *)s1)) + (ft_strlen((char *)s2)) + 1);
	if (!str)
		return (NULL);
	while (s1 != NULL && s1[j] != '\0')
		str[i++] = s1[j++];
	j = 0;
	while (s2 != NULL && s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	s1[20] = "oui";
// 	char	s2[20] = "non";
// 	printf("ft_strjoin : %s", ft_strjoin(s1, s2));
// 	return (0);
// }