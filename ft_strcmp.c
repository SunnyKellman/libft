/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:18:21 by skellman          #+#    #+#             */
/*   Updated: 2019/11/02 16:07:53 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t c;

	c = 0;
	while ((s1[c] == s2[c]) && s1[c] && s2[c])
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
