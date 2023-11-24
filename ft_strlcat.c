/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:48:49 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/07 16:48:50 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total_len;

	i = 0;
	j = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (i < size && dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	total_len = i;
	while (src[j] != '\0')
	{
		total_len++;
		j++;
	}
	return (total_len);
}

// int main(void)
// {
//     const char    src[] = "concatene";
//     char    dest[30] = "ab";
//     char    dest2[30] = "ab";

//     ft_strlcat(dest, src, 0);
//     strlcat(dest2, src, 0);
//     printf("ft_strlcat : %s\n", dest);
//     printf("strlcat :    %s\n", dest2);
//     printf("ft_strlcat len : %ld\n", ft_strlcat(dest, src, 0));
//     printf("strlcat  len:    %ld\n", strlcat(dest2, src, 0));
//     return (0);
// }