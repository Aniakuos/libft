/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:23:28 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/24 20:04:05 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (len > 0 && haystack[i] != '\0')
	{
		j = 0;
		k = len;
		while (needle[j] == haystack[i + j] && k > 0)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char*)haystack + i);
			}
			j++;
			k--;
		}
		i++;
		len--;
	}
	return (0);
}
