/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:25:01 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/26 04:43:42 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	a;
	int		s;

	a = 0;
	s = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		s = s * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (a < 0 && s > 0)
			return (-1);
		else if (s < 0 && a < 0)
			return (0);
		a = a * 10 + *str - 48;
		str++;
	}
	return (a * s);
}