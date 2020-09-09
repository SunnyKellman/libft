/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <skellman@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:14:45 by skellman          #+#    #+#             */
/*   Updated: 2019/10/27 13:40:41 by skellman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	c;

	c = ft_strlen(s1);
	ft_strcpy(&s1[c], s2);
	return (s1);
}
