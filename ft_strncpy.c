/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:28:57 by skellman          #+#    #+#             */
/*   Updated: 2019/10/31 14:35:48 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t len)
{
	size_t c;

	c = 0;
	while (s2[c] && c < len)
	{
		s1[c] = s2[c];
		c++;
	}
	while (c < len)
	{
		s1[c] = '\0';
		c++;
	}
	return (s1);
}
