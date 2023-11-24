/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:40:15 by jhoratiu          #+#    #+#             */
/*   Updated: 2023/11/24 16:40:18 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lst_new(void* content)
{
	t_list	*lst;

	lst = (t_list*)malloc(sizeof(t_list));
	if(!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}