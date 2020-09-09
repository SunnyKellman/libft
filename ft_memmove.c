/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:24:05 by skellman          #+#    #+#             */
/*   Updated: 2019/10/28 17:11:03 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest > source)
	{
		while (len--)
		{
			dest[len] = source[len];
		}
	}
	else if (dest < source)
		ft_memcpy(dst, src, len);
	return (dst);
}
