/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprawns <iprawns@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:56:25 by iprawns           #+#    #+#             */
/*   Updated: 2021/10/13 18:24:37 by iprawns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*plus_memory(int n, int count)
{
	char	*str;

	str = malloc((sizeof(char) * count) + 1);
	if (str)
	{
		str[count] = '\0';
		count--;
		while (count >= 0)
		{
			str[count] = ((n % 10) + '0');
			n /= 10;
			count--;
		}
		return (str);
	}
	return (NULL);
}

static char	*minus_memory(int n, int count)
{
	char	*str;

	str = malloc((sizeof(char) * count) + 2);
	if (str)
	{
		count++;
		str[count] = '\0';
		count--;
		str[0] = '-';
		while (count > 0)
		{
			str[count] = ((n % 10) + '0');
			n /= 10;
			count--;
		}
		return (str);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = count_digit(n);
	if (n >= 0)
		return (plus_memory(n, count));
	return (minus_memory((-n), count));
}
