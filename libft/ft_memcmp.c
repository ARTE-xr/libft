/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattif <mattif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:27:58 by mattif            #+#    #+#             */
/*   Updated: 2021/11/26 16:19:52 by mattif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (((char *)s1)[i] == ((char *)s2)[i] && i < n - 1)
		i++;
	if (s1 != s2 && i < n)
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	else
		return (0);
}
