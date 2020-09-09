/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 21:01:00 by skellman          #+#    #+#             */
/*   Updated: 2019/10/28 21:11:48 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	c;
	char	*double_string;

	if (s1 && s2)
	{
		c = ft_strlen(s1) + ft_strlen(s2);
		if (!(double_string = ft_strnew(c)))
			return (NULL);
		ft_strcpy(double_string, s1);
		ft_strcat(double_string, s2);
		return (double_string);
	}
	return (NULL);
}
