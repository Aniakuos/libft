/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 04:50:33 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/28 01:39:43 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*p;

	if (!lst || !*lst || !del)
		return ;
	p = *lst;
	while (p)
	{
		tmp = p;
		ft_lstdelone(p, del);
		p = tmp->next;
	}
	*lst = NULL;
}
