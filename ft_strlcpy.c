/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:09:12 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/07 16:09:14 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j += 1;
	if (size < 1)
		return (j);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (j);
}

// int main(void)
// {
//     const char    src[] = "copie-moi";
//     char    dest[30] = "";
//     char    dest2[30] = "";

//     ft_strlcpy(dest, src, 5);
//     strlcpy(dest2, src, 5);
//     printf("ft_strlcpy : %s\n", dest);
//     printf("strlcpy :    %s\n", dest2);
// 	printf("ft_strlcpy len : %ld\n", ft_strlcpy(dest, src, 1));
// 	printf("strlcpy  len:    %ld\n", strlcpy(dest2, src, 1));
//     return (0);
// }