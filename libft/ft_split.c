/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattif <mattif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:23:18 by mattif            #+#    #+#             */
/*   Updated: 2021/11/26 16:19:21 by mattif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_words(const char *str, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	count_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	void	ft_free(char **p)
{
	int		i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free (p);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**str;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	str = malloc(sizeof(char *) * (len_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		i = count_len(s, c);
		if (*s != c && *s)
			str[j++] = ft_substr(s, 0, i);
		if ((!str[j - 1]) && *s)
			ft_free(str);
			s += i;
	}
	str[j] = NULL;
	return (str);
}
