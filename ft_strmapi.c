/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 20:30:42 by skellman          #+#    #+#             */
/*   Updated: 2019/10/28 20:36:40 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*fresh_string;

	if (s)
	{
		i = ft_strlen(s);
		if (!(fresh_string = (char *)malloc(sizeof(char) * (i + 1))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			fresh_string[i] = f((unsigned int)i, s[i]);
			i++;
		}
		fresh_string[i] = '\0';
		return (fresh_string);
	}
	return (NULL);
}
