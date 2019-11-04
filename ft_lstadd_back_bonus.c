/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 22:32:46 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/26 01:33:19 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *p;

	if (alst == NULL || !new)
		return ;
	if (!*alst)
		*alst = new;
	else
	{
		p = *alst;
		while (p->next)
			p = p->next;
		p->next = new;
	}
}
