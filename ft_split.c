/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprawns <iprawns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:59:13 by iprawns           #+#    #+#             */
/*   Updated: 2021/10/15 12:27:08 by iprawns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_sub_split(char **str, char const *s, char c)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		len;
	char const			*start;

	i = 0;
	j = 0;
	while (s[j])
	{
		len = 0;
		while (s[j] && s[j] == c)
			j++;
		start = &s[j];
		while (s[j] && s[j] != c)
		{	
			len++;
			j++;
		}
		if (s[j - 1] != c)
			str[i++] = ft_substr(start, 0, len);
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(const char *str, char c)
{
	char	**res;

	if (!str)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!res)
		return (NULL);
	return (ft_sub_split(res, str, c));
}
