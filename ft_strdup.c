/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprawns <iprawns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:14:19 by iprawns           #+#    #+#             */
/*   Updated: 2021/10/09 16:38:45 by iprawns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;

	new = malloc(ft_strlen(s1) + 1);
	if (new == NULL)
		return (NULL);
	return ((char *) ft_memcpy (new, s1, (ft_strlen(s1) + 1)));
}
