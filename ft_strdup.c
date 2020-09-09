/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:27:16 by skellman          #+#    #+#             */
/*   Updated: 2019/11/02 15:53:03 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	size_t	c;
	size_t	i;

	c = 0;
	while (src[c])
		c++;
	if (!(str = (char*)malloc(sizeof(char) * (c + 1))))
		return (NULL);
	i = 0;
	while (i < c)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
