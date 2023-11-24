/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:06:39 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/08 14:06:48 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	unsigned const char	*src2;

	dest2 = dest;
	src2 = src;
	i = 0;
	if ((dest == NULL && src == NULL) || (n == 0))
		return (dest);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

// int main(void)
// {
//     // char    src[20] = "ouietnon";
//     char    dest[30] = { 0 };
//     char    dest2[30] = { 0 };

//     ft_memcpy(dest, "zyxwvutsrqponmlkjihgfedcba", 14);
//     printf("ft_memcpy : %s\n", dest);
//     memcpy(dest2, "zyxwvutsrqponmlkjihgfedcba", 14);
//     printf("memcpy    : %s\n", dest2);
//     return (0);
// }

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t		i;
// 	char		*ptr;
// 	const char	*ptr2;

// 	ptr2 = src;
// 	ptr = dest;
// 	i = 0;
// 	while (i < n)
// 	{
// 		ptr[i] = ptr2[i];
// 		i++;
// 	}
// 	return (dest);
// }