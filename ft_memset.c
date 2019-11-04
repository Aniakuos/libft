/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:40:16 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/26 04:34:53 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *sh;
	unsigned char ch;

	sh = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		*sh = ch;
		n--;
		sh++;
	}
	return (s);
}
