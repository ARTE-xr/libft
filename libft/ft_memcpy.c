/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattif <mattif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:38:26 by mattif            #+#    #+#             */
/*   Updated: 2021/11/26 16:19:58 by mattif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srcc;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dst);
}
