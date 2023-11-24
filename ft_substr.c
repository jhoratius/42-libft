/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:35:48 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/15 15:35:51 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (start > s_len || len == 0)
		return (ft_strdup(""));
	s_len -= start;
	if (s_len < len)
		len = s_len;
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (NULL);
	i = 0;
	j = start;
	while (i < len && s[i])
		sub_str[i++] = (char)s[j++];
	sub_str[i] = '\0';
	return (sub_str);
}

// int	main(void)
// {
// 	char * s = ft_substr("tripouillehfjhfvjj", 1, 40);
// 	printf("ft_substr : %s\n", s);
// }