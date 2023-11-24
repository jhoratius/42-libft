/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:52:59 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/14 11:53:03 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (ULONG_MAX / nmemb < size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

// int	main(void)
// {
// 	size_t i;
// 	size_t j;
// 	void	*ft_c;
// 	void	*call;

// 	i = 7;
// 	j = 7;
// 	ft_c = ft_calloc(i, sizeof(char));
// 	call = calloc(i, sizeof(char));

// 	printf("ft_calloc : %p\n", ft_c);
// 	printf("calloc : %p", call);
// 	free(ft_c);
// 	free(call);
// }