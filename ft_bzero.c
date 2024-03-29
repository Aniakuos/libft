/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:54:55 by ssghuri           #+#    #+#             */
/*   Updated: 2019/10/26 04:44:07 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *sh;

	sh = (unsigned char *)s;
	while (n > 0)
	{
		*sh = '\0';
		n--;
		sh++;
	}
}
