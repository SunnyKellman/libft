/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 13:59:06 by skellman          #+#    #+#             */
/*   Updated: 2019/10/27 14:15:31 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	c;
	size_t	d;
	size_t	res;

	d = ft_strlen(dest);
	c = ft_strlen(src);
	if (size < d)
		return (size + c);
	res = 0;
	while (src[res] && (d + res + 1) < size)
	{
		dest[d + res] = src[res];
		res++;
	}
	dest[d + res] = '\0';
	return (d + c);
}
