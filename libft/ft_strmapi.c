/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattif <mattif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:39:25 by mattif            #+#    #+#             */
/*   Updated: 2021/11/26 16:20:36 by mattif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*b;

	if (!s)
		return (0);
	i = 0;
	b = (char *)malloc(ft_strlen(s) + 1);
	if (!b)
		return (NULL);
	while (s[i])
	{
		b[i] = f(i, s[i]);
		i++;
	}
	b[i] = '\0';
	return (b);
}
