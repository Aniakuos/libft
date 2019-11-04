/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:01:01 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/29 22:17:37 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		lend;
	size_t		lens;
	size_t		i;
	size_t		f;
	size_t		n;

	i = 0;
	lens = ft_strlen(src);
	if (size == 0 )
		return (lens);
	lend = ft_strlen(dst);
	n = lend + lens;
	f = size - lend - 1;
	if (size == 0 && dst == NULL)
		return (lens);
	while (src[i] != '\0' && i < f)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (n);
}
int main()
{
	printf("%lu", ft_strlcat(NULL, "NULL", 0));
	printf("%lu", strlcat(NULL, "MUL", 0));
	return (0);
}
