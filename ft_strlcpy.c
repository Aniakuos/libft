/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:00:53 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/22 16:45:04 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t n;
	size_t f;

	i = 0;
	n = ft_strlen(src);
	if (size == 0)
		return (n);
	f = size - 1;
	while (src[i] != '\0' && f > 0)
	{
		dst[i] = src[i];
		i++;
		f--;
	}
	dst[i] = '\0';
	return (n);
}
