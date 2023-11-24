/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:11:57 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/08 14:11:59 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;

	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	i = 0;
	if ((!dest && !src) || (n == 0))
		return (dest);
	if (dest2 > src2)
	{
		while (n-- > 0)
			dest2[n] = src2[n];
	}
	else
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
// 	char	src[] = "";
// 	char	dest[20] = "";
// 	char	dest2[20] = "";

// 	ft_memmove(dest, src, 7);
// 	memmove(dest2, src, 7);
// 	printf("ft_memmove : %s\n", dest);
// 	printf("memmove : %s\n", dest2);
// }