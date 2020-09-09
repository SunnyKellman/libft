/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:48:33 by skellman          #+#    #+#             */
/*   Updated: 2019/11/02 16:03:46 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t c;

	if (n == 0)
		return (0);
	c = 0;
	while (s1[c] == s2[c] && s1[c] && s2[c] && c < n - 1)
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
