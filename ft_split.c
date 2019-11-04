/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:16:52 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/28 23:10:09 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_count_words(char *str, char c)
{
	int i;
	int k;
	int count;

	i = 0;
	k = 0;
	count = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == c)
			k = 0;
		else if (k == 0)
		{
			k = 1;
			count++;
		}
		str++;
	}
	return (count);
}

int		ft_length(char *str, int i, char c)
{
	int len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_free(char **p, int j)
{
	while (j > 0)
	{
		j--;
		free(p[j]);
	}
	free(p);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(p = malloc(sizeof(char*) * (ft_count_words((char*)s, c) + 1))))
		return (NULL);
	while (s[i] != '\0' && j < ft_count_words((char*)s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (!(p[j] = malloc(sizeof(char) * (ft_length((char*)s, i, c) + 1))))
			return (ft_free(p, j));
		while (s[i] != c && s[i] != '\0')
			p[j][k++] = s[i++];
		p[j][k] = '\0';
		j++;
	}
	p[j] = 0;
	return (p);
}

int main()
{
	char *str = "          ";
	char **p= ft_split(str, ' ');
	int i =0;
	while(p[i] != '\0')
	{
		printf("%s", p[i]);
		i++;
	}
	return(0);
}
