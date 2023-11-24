/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:40:55 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/23 16:10:09 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_writenbr(char *str, size_t n, char sign, size_t length)
{
	size_t		i;
	long long	nb;

	nb = n;
	i = 0;
	if (sign == '-')
	{
		str[0] = '-';
		nb = -n;
		length++;
		i++;
	}
	while (nb > 0)
	{
		str[length - i - 1] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
}

static char	ft_sign(int n)
{
	if (n < 0)
		return ('-');
	return ('+');
}

char	*ft_itoa(int n)
{
	char	*str;
	char	sign;
	size_t	count;
	size_t	num;

	sign = ft_sign(n);
	num = n;
	count = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (sign == '-')
	{
		num = -num;
		count++;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	str = ft_calloc((count + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_writenbr(str, n, sign, count);
	return (str);
}

// int	main(void)
// {
// 	printf("result : %s\n", ft_itoa(0));
// 	return (0);
// }
