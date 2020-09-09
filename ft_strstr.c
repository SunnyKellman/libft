/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:14:52 by skellman          #+#    #+#             */
/*   Updated: 2019/10/27 17:51:08 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t c;
	size_t d;

	c = 0;
	d = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (haystack[c])
	{
		while (haystack[c + d] == needle[d])
		{
			if (!needle[d + 1])
				return ((char *)&haystack[c]);
			d++;
		}
		d = 0;
		c++;
	}
	return (NULL);
}
