/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 23:56:43 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/24 20:10:31 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		lenb(int n)
{
	int len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*impl(char *s, int n, int i)
{
	unsigned int nb;

	nb = 0;
	if (n == 0)
		*s = n + 48;
	else if (n < 0)
	{
		*s = '-';
		nb = n * (-1);
	}
	else
		nb = n;
	s[i + 1] = '\0';
	while (nb != 0)
	{
		s[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;

	if (n <= 0)
		len = lenb(n) + 1;
	else
		len = lenb(n);
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	return (impl(p, n, len - 1));
}
