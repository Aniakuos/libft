/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 00:26:16 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/28 00:57:38 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		fctb(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		lens;
	char	*var;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	lens = ft_strlen(s1) - 1;
	while (fctb((char *)set, s1[i]) != 0)
		i++;
	while (fctb((char*)set, s1[lens]) != 0 && lens > 0)
		lens--;
	if (lens < i)
	{
		var = malloc(1);
		var[0] = '\0';
		return (var);
	}
	p = (char*)malloc(lens - i + 2);
	if (p == 0)
		return (0);
	ft_memcpy(p, s1 + i, lens - i + 1);
	p[lens - i + 1] = '\0';
	return (p);
}
