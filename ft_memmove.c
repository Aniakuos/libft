/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 01:07:16 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/26 03:02:12 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *s;
	unsigned char *d;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s == d)
		return (dst);
	if (s < d)
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
