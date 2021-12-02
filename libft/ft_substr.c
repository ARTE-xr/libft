/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattif <mattif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:12:08 by mattif            #+#    #+#             */
/*   Updated: 2021/11/26 16:20:54 by mattif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			lenght;
	size_t			x;
	char			*sub;

	x = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	lenght = ft_strlen(&s[start]);
	if (lenght >= len)
		lenght = len;
	sub = malloc(lenght + 1);
	if (!sub)
		return (NULL);
	while (s[start] && x < len)
		sub[x++] = s[start++];
	sub [x] = '\0';
	return (sub);
}
