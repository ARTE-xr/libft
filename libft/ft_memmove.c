/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattif <mattif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:45:42 by mattif            #+#    #+#             */
/*   Updated: 2021/11/21 21:38:00 by mattif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*dest;
	const char		*srcc;

	i = 0;
	dest = (char *)dst;
	srcc = (const char *)src;
	if (!dst && !src)
		return (NULL);
	if (dest > srcc)
	{
		while (len)
		{
			len--;
			dest[len] = srcc[len];
		}
	}
	while (i < len)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dst);
}
