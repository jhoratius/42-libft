/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:00:10 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/06 16:00:13 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char			*str;
	unsigned char	d;

	str = s;
	d = c;
	while (n)
	{
		*str = d;
		str++;
		n--;
	}
	return (s);
}

// int main(void)
// {
//     char    arr[50];
//     char    arr2[50];
//     int c;
//     int i;
//     int n;

//     c = 7;
//     n = 4;
//     i = 0;

//     while(i < n)
//     {
//         ft_memset(arr, c, n * sizeof(char));
//         printf("ft_memset : %d\n", arr[i]); 
//         i++;
//     }
//     i = 0;
//     while(i < n)
//     {
//         memset(arr2, c, n * sizeof(char));
//         printf("memset : %d\n", arr2[i]); 
//         i++;
//     }
//     return (0);
// }