/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:48:47 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/15 23:22:46 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		v;
	void		*p;

	v = count * size;
	p = malloc(v);
	if (p == 0)
		return (p);
	ft_bzero(p, v);
	return (p);
}
