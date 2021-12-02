/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattif <mattif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:22:01 by mattif            #+#    #+#             */
/*   Updated: 2021/11/21 21:45:55 by mattif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*a;

	a = (void *)malloc(count * size);
	if (a == NULL)
		return (NULL);
	a = ft_memset(a, 0, size * count);
	return (a);
}
