/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:21:52 by skellman          #+#    #+#             */
/*   Updated: 2019/10/27 17:07:33 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t i;

	i = ft_strlen(str);
	while (i != 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
