/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprawns <iprawns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:39:59 by iprawns           #+#    #+#             */
/*   Updated: 2021/10/09 12:13:19 by iprawns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t		i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (size > 0)
		{
			((char *)dest)[size - 1] = ((char *)src)[size - 1];
			size--;
		}
	}
	else
	{
		while (i < size)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
