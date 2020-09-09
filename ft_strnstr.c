/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:52:59 by skellman          #+#    #+#             */
/*   Updated: 2019/11/02 15:40:27 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t l)
{
	size_t c;
	size_t d;

	if (!(ft_strlen(hay)))
		return (NULL);
	c = 0;
	d = 0;
	if (!(ft_strlen(needle)))
		return ((char *)hay);
	while (hay[c] && c < l)
	{
		while (hay[c + d] == needle[d])
		{
			if (!(needle[d + 1]) && ((c + d) < l))
				return ((char *)&hay[c]);
			d++;
		}
		d = 0;
		c++;
	}
	return (NULL);
}
