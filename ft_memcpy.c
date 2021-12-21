/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprawns <iprawns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:35:36 by iprawns           #+#    #+#             */
/*   Updated: 2021/10/08 13:14:57 by iprawns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char		*s;
	const char	*c;

	s = dest;
	c = src;
	if (!dest && !src)
		return (0);
	while (size--)
		*s++ = *c++;
	return (dest);
}
