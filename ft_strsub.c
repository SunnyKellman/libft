/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 20:48:40 by skellman          #+#    #+#             */
/*   Updated: 2019/11/02 15:50:49 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	c;
	char	*sub_string;

	i = 0;
	c = (size_t)start;
	if (!s)
		return (NULL);
	if (!(sub_string = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && s[c])
	{
		sub_string[i] = s[c];
		i++;
		c++;
	}
	sub_string[i] = '\0';
	return (sub_string);
}
