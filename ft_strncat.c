/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 13:18:47 by skellman          #+#    #+#             */
/*   Updated: 2019/10/27 13:52:05 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	c;
	size_t	d;

	c = ft_strlen(s1);
	d = 0;
	while (s2[d] && d < n)
	{
		s1[c] = s2[d];
		c++;
		d++;
	}
	s1[c] = '\0';
	return (s1);
}
