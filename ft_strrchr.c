/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 11:25:01 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/21 20:56:01 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)s;
	i = 0;
	j = ft_strlen(s);
	while (j >= 0)
	{
		if (str[j] == (char)c)
			return (str + j);
		j--;
	}
	return (NULL);
}
