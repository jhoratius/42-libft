/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:19:14 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/07 12:19:16 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	i = 0;
	c = s;
	while (i < n)
	{
		*c = 0;
		c++;
		i++;
	}
}

// int main(void)
// {
//     char    str[] = "pourquoi tu boudes?";
//     char    str2[] = "pourquoi tu boudes?";
//     int n;

//     n = 1;
//     printf("str before : %s\n", str);
//     ft_bzero(str, n * sizeof(char));
//     printf("str after : %s\n", str);

//     printf("str2 before : %s\n", str2);
//     bzero(str2, n * sizeof(char));
//     printf("str2 after : %s", str2);
// }